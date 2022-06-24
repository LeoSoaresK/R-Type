typedef struct Inimigo
{

    // Posicao do inimigo
    int x, y;

    // Velocidade
    int velocidade;

    // Cor
    ALLEGRO_COLOR cor;

    // Tamanho do inimigo
    int w, h;

    // Vivo
    bool vivo;

    // Tiro
    int t1x, t1y, t2x, t2y;
    int tw, th;
    int tvelocidadew, tvelocidadeh;
    ALLEGRO_COLOR tcor;
    bool t1ativo, t2ativo;

} Inimigo;

void initInimigo(Inimigo inimigo[], int quantidade)
{
    // Gemeos
    if (quantidade == 2)
    {
        inimigo[0].x = SCREEN_W + rand() % (SCREEN_W);
        inimigo[1].x = inimigo[0].x;

        inimigo[0].y = rand() % (SCREEN_H / 3);
        inimigo[1].y = inimigo[0].y + (SCREEN_H * 2 / 3) - 100;

        for (int i = 0; i < quantidade; i++)
        {
            inimigo[i].w = 70;
            inimigo[i].h = 70;
            inimigo[i].cor = al_map_rgba(255, 0, 255, 255);
            inimigo[i].velocidade = 5;
            inimigo[i].vivo = true;

            inimigo[i].t1x = inimigo[i].x - 25;
            inimigo[i].t2x = inimigo[i].x - 25;
            inimigo[i].t1y = inimigo[i].y + inimigo[i].h / 2 - 5;
            inimigo[i].t2y = inimigo[i].y + inimigo[i].h / 2 - 5;
            inimigo[i].tw = 10;
            inimigo[i].th = 10;
            inimigo[i].tvelocidadew = -2;
            inimigo[i].tvelocidadeh = 3;
            inimigo[i].tcor = al_map_rgba(0, 255, 0, 255);
            inimigo[i].t1ativo = false;
            inimigo[i].t2ativo = false;
        }
    }

    // Cobra
    if (quantidade == 6)
    {
        inimigo[0].x = SCREEN_W + rand() % (SCREEN_W);
        inimigo[1].x = inimigo[0].x + inimigo[0].w + 10;
        inimigo[2].x = inimigo[1].x + inimigo[1].w + 10;
        inimigo[3].x = inimigo[2].x + inimigo[2].w + 10;
        inimigo[4].x = inimigo[3].x + inimigo[3].w + 10;
        inimigo[5].x = inimigo[4].x + inimigo[4].w + 10;

        inimigo[0].y = 2 * inimigo[0].h + rand() % (SCREEN_H - 4 * inimigo[0].h);
        inimigo[1].y = inimigo[0].y;
        inimigo[2].y = inimigo[1].y;
        inimigo[3].y = inimigo[2].y;
        inimigo[4].y = inimigo[3].y;
        inimigo[5].y = inimigo[4].y;

        for (int i = 0; i < quantidade; i++)
        {
            inimigo[i].w = 65;
            inimigo[i].h = 65;
            inimigo[i].cor = al_map_rgba(255, 0, 255, 255);
            inimigo[i].velocidade = 7;
            inimigo[i].vivo = true;
        }
    }
}

void aleatorizaInimigo(int *ponteiroQuantidade, Inimigo inimigo[], ALLEGRO_TIMER *timerBackground)
{
    int aux = al_get_timer_count(timerBackground) % 10;
    int i = *ponteiroQuantidade;

    if (i == 2)
    {
        if (inimigo[0].x + inimigo[0].w <= 5)
        {
            // printf("\noi");

            if (aux <= 5)
            {
                printf("\nInimigo %d", *ponteiroQuantidade);
                *ponteiroQuantidade = 6;
            }

            else
            {
                *ponteiroQuantidade = 2;
                printf("\nInimigo %d", *ponteiroQuantidade);
            }
        }
    }

    if (i == 6)
    {
        if (inimigo[0].x + 420 <= 5)
        {
            // printf("\noi");

            if (aux <= 5)
            {
                printf("\nInimigo %d", *ponteiroQuantidade);
                *ponteiroQuantidade = 6;
            }

            else
            {
                *ponteiroQuantidade = 2;
                printf("\nInimigo %d", *ponteiroQuantidade);
            }
        }
    }
}

void atualizaInimigo(Inimigo inimigo[], int quantidade, int relogio, Tiro tiro[], Bloco bloco, Nave nave, int *pontos)
{
    // Movimentar gemeos e tiro dos gemos
    if (quantidade == 2)
    {
        for (int i = 0; i < quantidade; i++)
        {
            inimigo[i].x += -inimigo[i].velocidade;

            inimigo[i].t1x += -inimigo[i].velocidade;
            inimigo[i].t2x += -inimigo[i].velocidade;

            if (inimigo[i].x <= SCREEN_W * 4 / 5)
            {
                if (inimigo[i].vivo)
                {
                    inimigo[i].t1ativo = true;
                    inimigo[i].t2ativo = true;
                }

                inimigo[i].t1y += -inimigo[i].tvelocidadeh;
                inimigo[i].t2y += inimigo[i].tvelocidadeh;

                inimigo[i].t1x += inimigo[i].tvelocidadew;
                inimigo[i].t2x += inimigo[i].tvelocidadew;
            }
        }
    }

    // Movimentar cobra
    if (quantidade == 6)
    {
        for (int i = 0; i < quantidade; i++)
        {
            inimigo[i].x += -inimigo[i].velocidade;

            if (inimigo[i].x > SCREEN_W - 100)
                inimigo[i].y += -3;
            if (inimigo[i].x > SCREEN_W - 200)
                inimigo[i].y += 3;
            if (inimigo[i].x > SCREEN_W - 300)
                inimigo[i].y += 3;
            if (inimigo[i].x > SCREEN_W - 400)
                inimigo[i].y += -3;
            if (inimigo[i].x > SCREEN_W - 500)
                inimigo[i].y += -3;
            if (inimigo[i].x > SCREEN_W - 600)
                inimigo[i].y += 3;
            if (inimigo[i].x > SCREEN_W - 700)
                inimigo[i].y += 3;
            if (inimigo[i].x > SCREEN_W - 800)
                inimigo[i].y += -3;
            if (inimigo[i].x > SCREEN_W - 900)
                inimigo[i].y += -3;
            if (inimigo[i].x > SCREEN_W - 1000)
                inimigo[i].y += 3;
            if (inimigo[i].x > SCREEN_W - 1100)
                inimigo[i].y += 3;
            if (inimigo[i].x > SCREEN_W - 1200)
                inimigo[i].y += -3;
        }
    }

    // Detectar colisoes
    for (int i = 0; i < quantidade; i++)
    {
        if (inimigo[i].vivo)
        {
            // Detectar colisao do inimigo com tiro

            for (int j = 0; j < NUM_BALAS; j++)
            {
                if (tiro[j].x + tiro[j].w >= inimigo[i].x && tiro[j].x <= inimigo[i].x + inimigo[i].w && tiro[j].ativo) // Testar igualdade no eixo x
                {
                    if (tiro[j].y + tiro[j].h >= inimigo[i].y && tiro[j].y <= inimigo[i].y + inimigo[i].h && tiro[j].ativo) // Testar igualdade no eixo y
                    {
                        if (quantidade == 2)
                            *pontos += 150;

                        if (quantidade == 6)
                            *pontos += 50;

                        printf("\nPontos: %d", *pontos);

                        if (!tiro[j].carregado)
                            tiro[j].ativo = false;

                        inimigo[i].vivo = false;
                    }
                }
            }

            // Detectar colisao do inimigo com bloco

            if (bloco.x + bloco.w >= inimigo[i].x && bloco.x <= inimigo[i].x + inimigo[i].w) // Testar igualdade no eixo x
            {
                if (bloco.y + bloco.h >= inimigo[i].y && bloco.y <= inimigo[i].y + inimigo[i].h) // Testar igualdade no eixo y
                {
                    inimigo[i].vivo = false;
                }
            }

            // Detectar colisao do tiro do inimigo com bloco

            if (bloco.x + bloco.w >= inimigo[i].t1x && bloco.x <= inimigo[i].t1x + inimigo[i].tw) // Testar igualdade no eixo x
            {
                if (bloco.y + bloco.h >= inimigo[i].t1y && bloco.y <= inimigo[i].t1y + inimigo[i].th) // Testar igualdade no eixo y
                {
                    inimigo[i].t1ativo = false;
                }
            }

            if (bloco.x + bloco.w >= inimigo[i].t2x && bloco.x <= inimigo[i].t2x + inimigo[i].tw) // Testar igualdade no eixo x
            {
                if (bloco.y + bloco.h >= inimigo[i].t2y && bloco.y <= inimigo[i].t2y + inimigo[i].th) // Testar igualdade no eixo y
                {
                    inimigo[i].t2ativo = false;
                }
            }
        }
    }

    if (quantidade == 2)
    {
        // Detectar se esta fora da tela no eixo y
        if (inimigo[0].y < 0)
            inimigo[0].y += -inimigo[0].h;

        if (inimigo[1].y + inimigo[1].h > SCREEN_H)
            inimigo[1].y += SCREEN_H + inimigo[1].h;

        // Detectar se esta fora da tela no eixo x
        if (inimigo[0].x + inimigo[0].w < 0)
        {
            initInimigo(inimigo, quantidade);
        }
    }

    if (quantidade == 6)
    {
        if (inimigo[0].x + 420 < 0)
        {
            initInimigo(inimigo, quantidade);
        }
    }
}

void desenhaInimigo(Inimigo inimigo[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        // Desenhar gemeos
        if (quantidade == 2)
        {
            if (inimigo[i].vivo)
            {
                // Desenhar inimigo
                al_draw_filled_rectangle(inimigo[i].x, inimigo[i].y, inimigo[i].x + inimigo[i].w, inimigo[i].y + inimigo[i].h, inimigo[i].cor);
            }

            if (inimigo[i].t1ativo)
            {
                // Desenhar tiro 1
                al_draw_filled_rectangle(inimigo[i].t1x, inimigo[i].t1y, inimigo[i].t1x + inimigo[i].tw, inimigo[i].t1y + inimigo[i].th, inimigo[i].tcor);
            }

            if (inimigo[i].t2ativo)
            {
                // Desenhar tiro 2
                al_draw_filled_rectangle(inimigo[i].t2x, inimigo[i].t2y, inimigo[i].t2x + inimigo[i].tw, inimigo[i].t2y + inimigo[i].th, inimigo[i].tcor);
            }
        }

        // Desenhar cobra
        if (quantidade == 6)
        {
            if (inimigo[i].vivo)
            {
                // Desenhar inimigo
                al_draw_filled_rectangle(inimigo[i].x, inimigo[i].y, inimigo[i].x + inimigo[i].w, inimigo[i].y + inimigo[i].h, inimigo[i].cor);
            }
        }
    }
}

void contarIvulnerabilidade(ALLEGRO_TIMER *timerIvulneravel, Nave *nave, bool *naveAtingida)
{
    if (*naveAtingida)
    {
        nave->ivulneravel = true;

        if (al_get_timer_count(timerIvulneravel) == 1)
        {
            al_stop_timer(timerIvulneravel);
            al_set_timer_count(timerIvulneravel, 0);
            *naveAtingida = false;
            nave->ivulneravel = false;
            printf("\nFim da ivulnerabilidade");
        }
    }
}

void colisaoNave(Nave nave, Bloco bloco, Inimigo inimigo[], int quantidade, int *vidas, ALLEGRO_TIMER *timerIvulneravel, bool *naveAtingida)
{
    if (!nave.ivulneravel)
    {
        for (int i = 0; i < quantidade; i++)
        {
            // Testar colisao com inimigo
            if (inimigo[i].vivo)
            {
                if (nave.x + NAVE_W >= inimigo[i].x && nave.x <= inimigo[i].x + inimigo[i].w) // Testar igualdade no eixo x
                {
                    if (nave.y + NAVE_H >= inimigo[i].y && nave.y <= inimigo[i].y + inimigo[i].h) // Testar igualdade no eixo y
                    {
                        *vidas += -1;
                        al_start_timer(timerIvulneravel);
                        *naveAtingida = true;
                        inimigo[i].vivo = false;
                        printf("\nVidas: %d", *vidas);
                        printf("\nNave ivulneravel");
                    }
                }
            }

            // Testar colisao com tiros do inimigo
            if (quantidade == 2)
            {
                if (inimigo[i].t1ativo && inimigo[i].x <= SCREEN_W * 4 / 5)
                {
                    if (nave.x + NAVE_W >= inimigo[i].t1x && nave.x <= inimigo[i].t1x + inimigo[i].tw) // Testar igualdade no eixo x
                    {
                        if (nave.y + NAVE_H >= inimigo[i].t1y && nave.y <= inimigo[i].t1y + inimigo[i].th) // Testar igualdade no eixo y
                        {
                            *vidas += -1;
                            al_start_timer(timerIvulneravel);
                            *naveAtingida = true;
                            inimigo[i].t1ativo = false;
                            printf("\nVidas: %d", *vidas);
                            printf("\nNave ivulneravel");
                        }
                    }
                }

                if (inimigo[i].t2ativo && inimigo[i].x <= SCREEN_W * 4 / 5)
                {
                    if (nave.x + NAVE_W >= inimigo[i].t2x && nave.x <= inimigo[i].t2x + inimigo[i].tw) // Testar igualdade no eixo x
                    {
                        if (nave.y + NAVE_H >= inimigo[i].t2y && nave.y <= inimigo[i].t2y + inimigo[i].th) // Testar igualdade no eixo y
                        {
                            *vidas += -1;
                            al_start_timer(timerIvulneravel);
                            *naveAtingida = true;
                            inimigo[i].t2ativo = false;
                            printf("\nVidas: %d", *vidas);
                            printf("\nNave ivulneravel");
                        }
                    }
                }
            }
        }

        // Testar colisao com bloco
        if (nave.x + NAVE_W >= bloco.x && nave.x <= bloco.x + BLOCO_W) // Testar igualdade no eixo x
        {
            if (nave.y + NAVE_H >= bloco.y && nave.y <= bloco.y + BLOCO_H) // Testar igualdade no eixo y
            {
                *vidas += -1;
                al_start_timer(timerIvulneravel);
                *naveAtingida = true;
                printf("\nVidas: %d", *vidas);
                printf("\nNave ivulneravel");
            }
        }
    }
}