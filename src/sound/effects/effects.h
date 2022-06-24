void tocaTiro(Tiro tiro[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (!tiro[i].carregando && tiro[i].ativo && !tiro[i].carregado)
        {
            al_play_sample(somTiro, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
            break;
        }
        if (!tiro[i].carregando && tiro[i].ativo && tiro[i].carregado)
        {
            al_play_sample(somTiroCarregado, 1, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
            break;
        }
    }
}

void explosaoNave(Nave nave, Bloco bloco, Inimigo inimigo[], int quantidade)
{
    if (!nave.ivulneravel)
    {
        for (int i = 0; i < quantidade; i++)
        {
            // Contato com inimigo
            if (inimigo[i].vivo)
            {
                if (nave.x + NAVE_W >= inimigo[i].x && nave.x <= inimigo[i].x + inimigo[i].w) // Testar igualdade no eixo x
                {
                    if (nave.y + NAVE_H >= inimigo[i].y && nave.y <= inimigo[i].y + inimigo[i].h) // Testar igualdade no eixo y
                    {
                        al_play_sample(explosao, 0.7, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
                    }
                }
            }

            // Contato com tiros do inimigo
            if (quantidade == 2)
            {
                if (inimigo[i].t1ativo && inimigo[i].x <= SCREEN_W * 4 / 5)
                {
                    if (nave.x + NAVE_W >= inimigo[i].t1x && nave.x <= inimigo[i].t1x + inimigo[i].tw) // Testar igualdade no eixo x
                    {
                        if (nave.y + NAVE_H >= inimigo[i].t1y && nave.y <= inimigo[i].t1y + inimigo[i].th) // Testar igualdade no eixo y
                        {
                            al_play_sample(explosao, 0.7, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
                        }
                    }
                }

                if (inimigo[i].t2ativo && inimigo[i].x <= SCREEN_W * 4 / 5)
                {
                    if (nave.x + NAVE_W >= inimigo[i].t2x && nave.x <= inimigo[i].t2x + inimigo[i].tw) // Testar igualdade no eixo x
                    {
                        if (nave.y + NAVE_H >= inimigo[i].t2y && nave.y <= inimigo[i].t2y + inimigo[i].th) // Testar igualdade no eixo y
                        {
                            al_play_sample(explosao, 0.7, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
                        }
                    }
                }
            }
        }

        // Contato com bloco
        if (nave.x + NAVE_W >= bloco.x && nave.x <= bloco.x + BLOCO_W) // Testar igualdade no eixo x
        {
            if (nave.y + NAVE_H >= bloco.y && nave.y <= bloco.y + BLOCO_H) // Testar igualdade no eixo y
            {
                al_play_sample(explosao, 0.7, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);
            }
        }
    }
}