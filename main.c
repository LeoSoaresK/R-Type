#include "src/autoload.h"

// MAIN ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

int main(int argc, char **argv)
{

	initAllegro();
	initBitmaps();
	initSound();

	while (game)
	{
		while (opening)
			initOpening();

		while (start)
			initStart();

		// INICIO DO JOGO ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		// Cria nave
		Nave nave;
		initNave(&nave);
		int vidas = 3;
		bool naveAtingida = false;

		// Cria bloco
		Bloco bloco;
		initBloco(&bloco);

		// Cria tiro
		Tiro tiro[NUM_BALAS];
		initTiro(tiro, nave, NUM_BALAS);
		bool carregando = false;

		// Cria inimigos
		int relogio;
		int quantidade = 6;
		int *ponteiroQuantidade;
		ponteiroQuantidade = &quantidade;
		Inimigo inimigo[quantidade];
		initInimigo(inimigo, quantidade);

		// Cria interface
		Interface interface;
		initInterface(&interface);
		int pontos = 0;
		int recorde = 0;
		bool armazenar = false;

		// Ler recorde
		FILE *topScore;
		topScore = fopen("topScore.txt", "r");
		fscanf(topScore, "%d", &recorde);
		fclose(topScore);

		void armazenaRecorde(int pontos, int *recorde, bool *armazenar)
		{
			bool highScore = false;

			if (pontos >= *recorde)
			{
				highScore = true;
				*armazenar = true;
			}

			if (highScore)
			{
				*recorde = pontos;
			}
		}

		// Animar movimento da nave
		int movimentoNave = 0;

		// Variaveis para controlar a dificuldade
		al_start_timer(timerDificuldade);
		float xTimer = 1.0;
		float xBackground = 3.0;

		printf("\nVidas: %d", vidas);

		/*
		As funcoes desenhaNave(), desenhaBloco(), desenhaTiro(), desenhaInimigo() comentadas no evento de timer abaixo servem apenas para desenhar
		a hitbox, uma vez que foram desenhados sprites para cobrir os retangulos utilizados na implementacao dos objetos.
		*/

		while (playing)
		{
			ALLEGRO_EVENT ev;					 // Espera por um evento e o armazena na variavel de evento ev
			al_wait_for_event(event_queue, &ev); // Pausa o loop, aguardando pelo evento
			al_play_sample_instance(musicaJogo_Instance);

			// Caso ocorra um evento de timer, ou seja, o tempo passou de t para t+1
			if (ev.type == ALLEGRO_EVENT_TIMER)
			{
				// Aumentar a dificuldade a cada 15s de jogo
				if (al_get_timer_count(timerDificuldade) % 700 == 0)
				{
					xTimer += -0.015;
					xBackground += -0.045;
					al_set_timer_speed(timer, xTimer / FPS);
					al_set_timer_speed(timerBackground, xBackground / FPS);
					printf("\nDificuldade aumentada!");
				}

				// Desenhar background
				frameBackground = al_get_timer_count(timerBackground) % 39;
				al_draw_bitmap(background[frameBackground], 0, 0, 0);

				// Atualizar e desenhar nave
				atualizaNave(&nave);
				// desenhaNave(nave);
				atualizaDesenhoNave(nave, movimentoNave);

				// Atualizar e desenhar bloco
				atualizaBloco(&bloco);
				// desenhaBloco(bloco);
				desenhaAsteroide(bloco);

				// Atualizar e desenhar tiro

				atualizaTiro(tiro, NUM_BALAS, bloco, nave);
				// desenhaTiro(tiro, NUM_BALAS);
				desenhoTiro(tiro, NUM_BALAS);
				if (carregando)
					carregaTiro(tiro, NUM_BALAS);

				// Atualizar e desenhar inimigo
				aleatorizaInimigo(&*ponteiroQuantidade, inimigo, timerBackground);
				atualizaInimigo(inimigo, quantidade, relogio, tiro, bloco, nave, &pontos);
				// desenhaInimigo(inimigo, quantidade);
				desenhoInimigo(inimigo, quantidade);
				desenhaTiroInimigo(inimigo, quantidade);

				// Desenhar interface
				atualizaInterface(&interface, tiro, quantidade);
				desenhoInterface();
				desenhaInterface(interface);
				desenhaPontuacao(pontos);
				armazenaRecorde(pontos, &recorde, &armazenar);
				desenhaRecorde(recorde);
				desenhaVidas(vidas);

				// Teste colisoes
				explosaoNave(nave, bloco, inimigo, quantidade);
				contarIvulnerabilidade(timerIvulneravel, &nave, &naveAtingida);
				colisaoNave(nave, bloco, inimigo, quantidade, &vidas, timerIvulneravel, &naveAtingida);
				// desenhaExplosao(inimigo, quantidade, tiro, bloco);

				if (vidas == 0)
				{
					end = 1;
					playing = 0;
					al_stop_sample_instance(musicaJogo_Instance);
					xTimer = 1.0;
					xBackground = 3.0;
					al_set_timer_speed(timer, xTimer / FPS);
					al_set_timer_speed(timerBackground, xBackground / FPS);
					al_stop_timer(timerIvulneravel);
					al_set_timer_count(timerIvulneravel, 0);
					al_stop_sample_instance(musicaJogo_Instance);
					al_rest(0.5);
					printf("\nFim de jogo");
				}

				al_flip_display(); // Atualiza a tela (quando houver algo para mostrar)
			}

			// Caso ocorra um evento de tecla pressionada
			else if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
			{
				switch (ev.keyboard.keycode)
				{
					// Pilotar

				case ALLEGRO_KEY_W:
					movimentoNave = 1;
					paraCima(&nave);
					break;
				case ALLEGRO_KEY_S:
					movimentoNave = -1;
					paraBaixo(&nave);
					break;
				case ALLEGRO_KEY_D:
					paraDireita(&nave);
					break;
				case ALLEGRO_KEY_A:
					paraEsquerda(&nave);
					break;

					// Atirar

				case ALLEGRO_KEY_SPACE:
					carregando = true;
					segura(tiro, nave, NUM_BALAS);
					carregaTiro(tiro, NUM_BALAS);
					ativaInterface(&interface);
					break;
				}

				// printf("\nCodigo tecla: %d", ev.keyboard.keycode); // Imprime qual tecla foi
			}

			// Caso ocorra um evento de tecla levantada
			else if (ev.type == ALLEGRO_EVENT_KEY_UP)
			{
				switch (ev.keyboard.keycode)
				{
				case ALLEGRO_KEY_W:
					movimentoNave = 0;
					paraBaixo(&nave);
					break;

				case ALLEGRO_KEY_S:
					movimentoNave = 0;
					paraCima(&nave);
					break;
				case ALLEGRO_KEY_D:
					paraEsquerda(&nave);
					break;
				case ALLEGRO_KEY_A:
					paraDireita(&nave);
					break;

					// Atirar

				case ALLEGRO_KEY_SPACE:
					carregando = false;
					atira(tiro, nave, NUM_BALAS);
					tocaTiro(tiro, NUM_BALAS);
					desativaInterface(&interface);
					break;
				}
			}

			// Caso ocorra um evento de fechar a tela
			else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			{
				playing = 0; // Encerra o jogo
				game = 0;
			}
		}

		// End ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		// Armazenar recorde
		if (armazenar)
		{
			topScore = fopen("topScore.txt", "w");
			fprintf(topScore, "%d", recorde);
			fclose(topScore);
		}

		while (end)
		{
			ALLEGRO_EVENT ev;					 // Espera por um evento e o armazena na variavel de evento ev
			al_wait_for_event(event_queue, &ev); // Pausa o loop, aguardando pelo evento

			al_start_timer(timerEnd);

			al_play_sample_instance(musicaEnd_Instance);

			// Caso ocorra um evento de timer, ou seja, o tempo passou de t para t+1
			if (ev.type == ALLEGRO_EVENT_TIMER)
			{
				if (armazenar)
					desenhaGameOver2();
				else
				{
					desenhaGameOver();
				}

				if (al_get_timer_count(timerEnd) == 5)
				{
					al_stop_timer(timerEnd);
					al_set_timer_count(timerEnd, 0);
					al_stop_sample_instance(musicaEnd_Instance);
					end = 0;
					opening = 1;
				}

				// Atualiza a tela (quando houver algo para mostrar)
				al_flip_display();
			}

			// Caso ocorra um evento de fechar a tela
			else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			{
				end = 0; // Encerra o jogo
				game = 0;
			}
		}
	}

	al_destroy_display(display); // Encerra a tela

	al_destroy_event_queue(event_queue); // Encerra a fila de eventos

	al_destroy_bitmap(nave0);
	al_destroy_bitmap(nave2);
	al_destroy_bitmap(nave5);

	al_destroy_bitmap(abertura0);
	al_destroy_bitmap(abertura1);
	al_destroy_bitmap(abertura2);
	al_destroy_bitmap(abertura3);
	al_destroy_bitmap(abertura4);
	al_destroy_bitmap(abertura5);
	al_destroy_bitmap(abertura6);
	al_destroy_bitmap(abertura7);
	al_destroy_bitmap(abertura8);
	al_destroy_bitmap(abertura9);
	al_destroy_bitmap(abertura10);
	al_destroy_bitmap(abertura11);
	al_destroy_bitmap(abertura12);
	al_destroy_bitmap(abertura13);
	al_destroy_bitmap(abertura14);
	al_destroy_bitmap(abertura15);
	al_destroy_bitmap(abertura16);
	al_destroy_bitmap(abertura17);
	al_destroy_bitmap(abertura18);
	al_destroy_bitmap(abertura19);
	al_destroy_bitmap(abertura20);
	al_destroy_bitmap(abertura21);
	al_destroy_bitmap(abertura22);
	al_destroy_bitmap(abertura23);
	al_destroy_bitmap(abertura24);
	al_destroy_bitmap(abertura25);
	al_destroy_bitmap(abertura26);
	al_destroy_bitmap(abertura27);
	al_destroy_bitmap(abertura28);
	al_destroy_bitmap(abertura29);
	al_destroy_bitmap(abertura30);
	al_destroy_bitmap(abertura31);
	al_destroy_bitmap(abertura32);
	al_destroy_bitmap(abertura33);
	al_destroy_bitmap(abertura34);
	al_destroy_bitmap(abertura35);
	al_destroy_bitmap(abertura36);
	al_destroy_bitmap(abertura37);
	al_destroy_bitmap(abertura38);
	al_destroy_bitmap(abertura39);
	al_destroy_bitmap(abertura40);
	al_destroy_bitmap(abertura41);
	al_destroy_bitmap(abertura42);
	al_destroy_bitmap(abertura43);
	al_destroy_bitmap(abertura44);
	al_destroy_bitmap(abertura45);
	al_destroy_bitmap(abertura46);
	al_destroy_bitmap(abertura47);
	al_destroy_bitmap(abertura48);
	al_destroy_bitmap(abertura49);
	al_destroy_bitmap(abertura50);
	al_destroy_bitmap(abertura51);
	al_destroy_bitmap(abertura52);
	al_destroy_bitmap(abertura53);
	al_destroy_bitmap(abertura54);
	al_destroy_bitmap(abertura55);
	al_destroy_bitmap(abertura56);
	al_destroy_bitmap(abertura57);
	al_destroy_bitmap(abertura58);
	al_destroy_bitmap(abertura59);
	al_destroy_bitmap(abertura60);
	al_destroy_bitmap(abertura61);
	al_destroy_bitmap(abertura62);
	al_destroy_bitmap(abertura63);
	al_destroy_bitmap(abertura64);
	al_destroy_bitmap(abertura65);
	al_destroy_bitmap(abertura66);
	al_destroy_bitmap(abertura67);
	al_destroy_bitmap(abertura68);
	al_destroy_bitmap(abertura69);
	al_destroy_bitmap(abertura70);
	al_destroy_bitmap(abertura71);
	al_destroy_bitmap(abertura72);
	al_destroy_bitmap(abertura73);
	al_destroy_bitmap(abertura74);
	al_destroy_bitmap(abertura75);
	al_destroy_bitmap(abertura76);
	al_destroy_bitmap(abertura77);
	al_destroy_bitmap(abertura78);
	al_destroy_bitmap(abertura79);
	al_destroy_bitmap(abertura80);
	al_destroy_bitmap(abertura81);
	al_destroy_bitmap(abertura82);
	al_destroy_bitmap(abertura83);
	al_destroy_bitmap(abertura84);
	al_destroy_bitmap(abertura85);
	al_destroy_bitmap(abertura86);
	al_destroy_bitmap(abertura87);
	al_destroy_bitmap(abertura88);
	al_destroy_bitmap(abertura89);
	al_destroy_bitmap(abertura90);
	al_destroy_bitmap(abertura91);
	al_destroy_bitmap(abertura92);
	al_destroy_bitmap(abertura93);
	al_destroy_bitmap(abertura94);
	al_destroy_bitmap(abertura95);
	al_destroy_bitmap(abertura96);
	al_destroy_bitmap(abertura97);
	al_destroy_bitmap(abertura98);
	al_destroy_bitmap(abertura99);
	al_destroy_bitmap(abertura100);

	al_destroy_bitmap(background[0]);
	al_destroy_bitmap(background[1]);
	al_destroy_bitmap(background[2]);
	al_destroy_bitmap(background[3]);
	al_destroy_bitmap(background[4]);
	al_destroy_bitmap(background[5]);
	al_destroy_bitmap(background[6]);
	al_destroy_bitmap(background[7]);
	al_destroy_bitmap(background[8]);
	al_destroy_bitmap(background[9]);
	al_destroy_bitmap(background[10]);
	al_destroy_bitmap(background[11]);
	al_destroy_bitmap(background[12]);
	al_destroy_bitmap(background[13]);
	al_destroy_bitmap(background[14]);
	al_destroy_bitmap(background[15]);
	al_destroy_bitmap(background[16]);
	al_destroy_bitmap(background[17]);
	al_destroy_bitmap(background[18]);
	al_destroy_bitmap(background[19]);
	al_destroy_bitmap(background[20]);
	al_destroy_bitmap(background[21]);
	al_destroy_bitmap(background[22]);
	al_destroy_bitmap(background[23]);
	al_destroy_bitmap(background[24]);
	al_destroy_bitmap(background[25]);
	al_destroy_bitmap(background[26]);
	al_destroy_bitmap(background[27]);
	al_destroy_bitmap(background[28]);
	al_destroy_bitmap(background[29]);
	al_destroy_bitmap(background[30]);
	al_destroy_bitmap(background[31]);
	al_destroy_bitmap(background[32]);
	al_destroy_bitmap(background[33]);
	al_destroy_bitmap(background[34]);
	al_destroy_bitmap(background[35]);
	al_destroy_bitmap(background[36]);
	al_destroy_bitmap(background[37]);
	al_destroy_bitmap(background[38]);
	al_destroy_bitmap(background[39]);

	al_destroy_bitmap(asteroide0);
	al_destroy_bitmap(asteroide1);
	al_destroy_bitmap(asteroide2);
	al_destroy_bitmap(asteroide3);

	al_destroy_bitmap(tiro0);
	al_destroy_bitmap(tiro1);
	al_destroy_bitmap(tiro2);
	al_destroy_bitmap(tiro3);
	al_destroy_bitmap(tiro4);
	al_destroy_bitmap(tiro5);
	al_destroy_bitmap(tiro6);
	al_destroy_bitmap(tiro7);
	al_destroy_bitmap(tiro8);

	al_destroy_bitmap(TIRO0);
	al_destroy_bitmap(TIRO1);
	al_destroy_bitmap(TIRO2);
	al_destroy_bitmap(TIRO3);
	al_destroy_bitmap(TIRO4);
	al_destroy_bitmap(TIRO5);
	al_destroy_bitmap(TIRO6);
	al_destroy_bitmap(TIRO7);
	al_destroy_bitmap(TIRO8);

	al_destroy_bitmap(charge0);
	al_destroy_bitmap(charge1);
	al_destroy_bitmap(charge2);
	al_destroy_bitmap(charge3);
	al_destroy_bitmap(charge4);
	al_destroy_bitmap(charge5);
	al_destroy_bitmap(charge6);
	al_destroy_bitmap(charge7);
	al_destroy_bitmap(charge8);
	al_destroy_bitmap(charge9);
	al_destroy_bitmap(charge10);
	al_destroy_bitmap(charge11);
	al_destroy_bitmap(charge12);
	al_destroy_bitmap(charge13);
	al_destroy_bitmap(charge14);
	al_destroy_bitmap(charge15);
	al_destroy_bitmap(charge16);
	al_destroy_bitmap(charge17);
	al_destroy_bitmap(charge18);

	al_destroy_bitmap(CHARGE0);
	al_destroy_bitmap(CHARGE1);
	al_destroy_bitmap(CHARGE2);
	al_destroy_bitmap(CHARGE3);
	al_destroy_bitmap(CHARGE4);
	al_destroy_bitmap(CHARGE5);
	al_destroy_bitmap(CHARGE6);
	al_destroy_bitmap(CHARGE7);
	al_destroy_bitmap(CHARGE8);
	al_destroy_bitmap(CHARGE9);
	al_destroy_bitmap(CHARGE10);
	al_destroy_bitmap(CHARGE11);
	al_destroy_bitmap(CHARGE12);
	al_destroy_bitmap(CHARGE13);
	al_destroy_bitmap(CHARGE14);
	al_destroy_bitmap(CHARGE15);
	al_destroy_bitmap(CHARGE16);
	al_destroy_bitmap(CHARGE17);
	al_destroy_bitmap(CHARGE18);
	al_destroy_bitmap(CHARGE19);

	al_destroy_bitmap(by);
	al_destroy_bitmap(logo);

	al_destroy_bitmap(gemeos0);
	al_destroy_bitmap(gemeos1);
	al_destroy_bitmap(gemeos2);
	al_destroy_bitmap(gemeos3);
	al_destroy_bitmap(gemeos4);
	al_destroy_bitmap(gemeos5);

	al_destroy_bitmap(cobra0);
	al_destroy_bitmap(cobra1);
	al_destroy_bitmap(cobra2);
	al_destroy_bitmap(cobra3);
	al_destroy_bitmap(cobra4);

	al_destroy_bitmap(explosao0);
	al_destroy_bitmap(explosao1);
	al_destroy_bitmap(explosao2);
	al_destroy_bitmap(explosao3);
	al_destroy_bitmap(explosao4);
	al_destroy_bitmap(explosao5);
	al_destroy_bitmap(explosao6);

	al_destroy_bitmap(N0);
	al_destroy_bitmap(N1);
	al_destroy_bitmap(N2);
	al_destroy_bitmap(N3);
	al_destroy_bitmap(N4);
	al_destroy_bitmap(N5);
	al_destroy_bitmap(N6);
	al_destroy_bitmap(N7);
	al_destroy_bitmap(N8);
	al_destroy_bitmap(N9);

	al_destroy_bitmap(V1);
	al_destroy_bitmap(V2);

	al_destroy_sample(somTiro);
	al_destroy_sample(somTiroCarregado);
	al_destroy_sample(somCharge);

	al_destroy_sample(somEnter);

	al_destroy_sample(explosao);

	al_destroy_sample(musicaJogo);
	al_destroy_sample_instance(musicaJogo_Instance);

	al_destroy_sample(musicaAbertura);
	al_destroy_sample_instance(musicaAbertura_Instance);

	return 0;
}