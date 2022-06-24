void desenhaExplosao(Inimigo inimigo[], int quantidade, Tiro tiro[], Bloco bloco)
{
    int frameExplosao = al_get_timer_count(timerAsteroide) % 2;

    // Explosao para inimigos atingidos
    for (int i = 0; i < quantidade; i++)
    {
        {
            for (int j = 0; j < NUM_BALAS; j++)
            {
                if (tiro[j].x + tiro[j].w >= inimigo[i].x && tiro[j].x <= inimigo[i].x + inimigo[i].w) // Testar igualdade no eixo x
                {
                    if (tiro[j].y + tiro[j].h >= inimigo[i].y && tiro[j].y <= inimigo[i].y + inimigo[i].h) // Testar igualdade no eixo y
                    {
                        switch (frameExplosao)
                        {
                        case 1:
                            al_draw_bitmap(explosao5, inimigo[i].x, inimigo[i].y, 0);
                            break;
                        case 0:
                            al_draw_bitmap(explosao6, inimigo[i].x, inimigo[i].y, 0);
                            break;
                        }
                    }
                }
            }
        }

        // Explosao para inimigos que colidiram com blocos
        if (bloco.x + bloco.w >= inimigo[i].x && bloco.x <= inimigo[i].x + inimigo[i].w) // Testar igualdade no eixo x
        {
            if (bloco.y + bloco.h >= inimigo[i].y && bloco.y <= inimigo[i].y + inimigo[i].h) // Testar igualdade no eixo y
            {
                switch (frameExplosao)
                {
                case 1:
                    al_draw_bitmap(explosao5, inimigo[i].x, inimigo[i].y, 0);
                    break;
                case 0:
                    al_draw_bitmap(explosao6, inimigo[i].x, inimigo[i].y, 0);
                    break;
                }
            }
        }
    }
}
