void initPlaying()
{
    ALLEGRO_EVENT ev;                    // Espera por um evento e o armazena na variavel de evento ev
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