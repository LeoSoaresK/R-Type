void desenhoInimigo(Inimigo inimigo[], int quantidade)
{
    int frameGemeo = al_get_timer_count(timerInimigo) % 6;

    // Gemeos
    if (quantidade == 2)
    {
        for (int i = 0; i < quantidade; i++)
        {
            if (inimigo[i].vivo)
            {
                switch (frameGemeo)
                {
                case 0:
                    al_draw_bitmap(gemeos0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                    break;
                case 1:
                    al_draw_bitmap(gemeos1, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                    break;
                case 2:
                    al_draw_bitmap(gemeos2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                    break;
                case 3:
                    al_draw_bitmap(gemeos3, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                    break;
                case 4:
                    al_draw_bitmap(gemeos4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                    break;
                case 5:
                    al_draw_bitmap(gemeos5, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                    break;
                }
            }
        }
    }

    // Movimentar cobra
    if (quantidade == 6)
    {
        for (int i = 0; i < quantidade; i++)
        {
            if (inimigo[i].vivo)
            {
                if (inimigo[i].x > SCREEN_W - 50)
                    al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 100)
                    al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 150)
                    al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 200)
                    al_draw_bitmap(cobra3, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 250)
                    al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 300)
                    al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 350)
                    al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 400)
                    al_draw_bitmap(cobra1, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 450)
                    al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 500)
                    al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 550)
                    al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 600)
                    al_draw_bitmap(cobra3, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 650)
                    al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 700)
                    al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 750)
                    al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 800)
                    al_draw_bitmap(cobra1, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 850)
                    al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 900)
                    al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 950)
                    al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 1000)
                    al_draw_bitmap(cobra3, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 1050)
                    al_draw_bitmap(cobra2, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 1100)
                    al_draw_bitmap(cobra4, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 1150)
                    al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 1200)
                    al_draw_bitmap(cobra1, inimigo[i].x - 10, inimigo[i].y - 10, 0);
                else if (inimigo[i].x > SCREEN_W - 1250)
                    al_draw_bitmap(cobra0, inimigo[i].x - 10, inimigo[i].y - 10, 0);
            }
        }
    }
}

void desenhaTiroInimigo(Inimigo inimigo[], int quantidade)
{
    for (int i = 0; i < quantidade; i++)
    {
        if (quantidade == 2 && inimigo[i].t1ativo)
        {
            al_draw_bitmap(tiroinimigo0, inimigo[i].t1x, inimigo[i].t1y, 0);
        }

        if (quantidade == 2 && inimigo[i].t2ativo)
        {
            al_draw_bitmap(tiroinimigo0, inimigo[i].t2x, inimigo[i].t2y, 0);
        }
    }
}