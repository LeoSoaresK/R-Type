void desenhoTiro(Tiro tiro[], int tamanho)
{
    int frameTiro;

    for (int i = 0; i < tamanho; i++)
    {
        if (!tiro[i].ativo && tiro[i].carregando && !tiro[i].carregado)
        {
            frameTiro = al_get_timer_count(timerBackground) % 19;

            switch (frameTiro)
            {
            case 0:
                al_draw_bitmap(charge0, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 1:
                al_draw_bitmap(charge1, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 2:
                al_draw_bitmap(charge2, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 3:
                al_draw_bitmap(charge3, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 4:
                al_draw_bitmap(charge4, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 5:
                al_draw_bitmap(charge5, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 6:
                al_draw_bitmap(charge6, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 7:
                al_draw_bitmap(charge7, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 8:
                al_draw_bitmap(charge8, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 9:
                al_draw_bitmap(charge9, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 10:
                al_draw_bitmap(charge10, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 11:
                al_draw_bitmap(charge11, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 12:
                al_draw_bitmap(charge12, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 13:
                al_draw_bitmap(charge13, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 14:
                al_draw_bitmap(charge14, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 15:
                al_draw_bitmap(charge15, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 16:
                al_draw_bitmap(charge16, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 17:
                al_draw_bitmap(charge17, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            case 18:
                al_draw_bitmap(charge18, tiro[i].x - 5, tiro[i].y - 5, 0);
                break;
            }
        }

        if (!tiro[i].ativo && tiro[i].carregando && tiro[i].carregado)
        {
            frameTiro = al_get_timer_count(timerBackground) % 20;

            switch (frameTiro)
            {
            case 0:
                al_draw_bitmap(CHARGE0, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 1:
                al_draw_bitmap(CHARGE1, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 2:
                al_draw_bitmap(CHARGE2, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 3:
                al_draw_bitmap(CHARGE3, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 4:
                al_draw_bitmap(CHARGE4, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 5:
                al_draw_bitmap(CHARGE5, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 6:
                al_draw_bitmap(CHARGE6, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 7:
                al_draw_bitmap(CHARGE7, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 8:
                al_draw_bitmap(CHARGE8, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 9:
                al_draw_bitmap(CHARGE9, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 10:
                al_draw_bitmap(CHARGE10, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 11:
                al_draw_bitmap(CHARGE11, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 12:
                al_draw_bitmap(CHARGE12, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 13:
                al_draw_bitmap(CHARGE13, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 14:
                al_draw_bitmap(CHARGE14, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 15:
                al_draw_bitmap(CHARGE15, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 16:
                al_draw_bitmap(CHARGE16, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 17:
                al_draw_bitmap(CHARGE17, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 18:
                al_draw_bitmap(CHARGE18, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            case 19:
                al_draw_bitmap(CHARGE19, tiro[i].x - 5, tiro[i].y - 17, 0);
                break;
            }
        }

        if (tiro[i].ativo && !tiro[i].carregado)
        {
            frameTiro = al_get_timer_count(timerBackground) % 8;

            switch (frameTiro)
            {
            case 0:
                al_draw_bitmap(tiro0, tiro[i].x - 35, tiro[i].y - 18, 0);
                break;
            case 1:
                al_draw_bitmap(tiro1, tiro[i].x - 35, tiro[i].y - 18, 0);
                break;
            case 2:
                al_draw_bitmap(tiro2, tiro[i].x - 35, tiro[i].y - 18, 0);
                break;
            case 3:
                al_draw_bitmap(tiro3, tiro[i].x - 35, tiro[i].y - 18, 0);
                break;
            case 4:
                al_draw_bitmap(tiro4, tiro[i].x - 35, tiro[i].y - 18, 0);
                break;
            case 5:
                al_draw_bitmap(tiro5, tiro[i].x - 35, tiro[i].y - 18, 0);
                break;
            case 6:
                al_draw_bitmap(tiro6, tiro[i].x - 35, tiro[i].y - 18, 0);
                break;
            case 7:
                al_draw_bitmap(tiro7, tiro[i].x - 35, tiro[i].y - 18, 0);
                break;
            case 8:
                al_draw_bitmap(tiro8, tiro[i].x - 35, tiro[i].y - 18, 0);
                break;
            }
        }

        if (tiro[i].ativo && tiro[i].carregado)
        {
            frameTiro = al_get_timer_count(timerBackground) % 9;

            switch (frameTiro)
            {
            case 0:
                al_draw_bitmap(TIRO0, tiro[i].x - 70, tiro[i].y - 37, 0);
                break;
            case 1:
                al_draw_bitmap(TIRO1, tiro[i].x - 70, tiro[i].y - 37, 0);
                break;
            case 2:
                al_draw_bitmap(TIRO2, tiro[i].x - 70, tiro[i].y - 37, 0);
                break;
            case 3:
                al_draw_bitmap(TIRO3, tiro[i].x - 70, tiro[i].y - 37, 0);
                break;
            case 4:
                al_draw_bitmap(TIRO4, tiro[i].x - 70, tiro[i].y - 37, 0);
                break;
            case 5:
                al_draw_bitmap(TIRO5, tiro[i].x - 70, tiro[i].y - 37, 0);
                break;
            case 6:
                al_draw_bitmap(TIRO6, tiro[i].x - 70, tiro[i].y - 37, 0);
                break;
            case 7:
                al_draw_bitmap(TIRO7, tiro[i].x - 70, tiro[i].y - 37, 0);
                break;
            case 8:
                al_draw_bitmap(TIRO8, tiro[i].x - 70, tiro[i].y - 37, 0);
                break;
            }
        }
    }
}
