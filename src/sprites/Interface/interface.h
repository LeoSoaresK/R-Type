void desenhoInterface()
{
    al_draw_bitmap(interface_, 0, 750, 0);
}

void desenhaPontuacao(int pontos)
{
    int x = 168;
    int y = 766;

    for (int i = 5; i > 0; i--)
    {
        switch (pontos % 10)
        {
        case 0:
            al_draw_bitmap(N0, x, y, 0);
            break;
        case 1:
            al_draw_bitmap(N1, x, y, 0);
            break;
        case 2:
            al_draw_bitmap(N2, x, y, 0);
            break;
        case 3:
            al_draw_bitmap(N3, x, y, 0);
            break;
        case 4:
            al_draw_bitmap(N4, x, y, 0);
            break;
        case 5:
            al_draw_bitmap(N5, x, y, 0);
            break;
        case 6:
            al_draw_bitmap(N6, x, y, 0);
            break;
        case 7:
            al_draw_bitmap(N7, x, y, 0);
            break;
        case 8:
            al_draw_bitmap(N8, x, y, 0);
            break;
        case 9:
            al_draw_bitmap(N9, x, y, 0);
            break;
        }

        x += -16;
        pontos = pontos / 10;
    }
}

void desenhaRecorde(int recorde)
{
    int x = 1169;
    int y = 766;

    for (int i = 5; i > 0; i--)
    {
        switch (recorde % 10)
        {
        case 0:
            al_draw_bitmap(N0, x, y, 0);
            break;
        case 1:
            al_draw_bitmap(N1, x, y, 0);
            break;
        case 2:
            al_draw_bitmap(N2, x, y, 0);
            break;
        case 3:
            al_draw_bitmap(N3, x, y, 0);
            break;
        case 4:
            al_draw_bitmap(N4, x, y, 0);
            break;
        case 5:
            al_draw_bitmap(N5, x, y, 0);
            break;
        case 6:
            al_draw_bitmap(N6, x, y, 0);
            break;
        case 7:
            al_draw_bitmap(N7, x, y, 0);
            break;
        case 8:
            al_draw_bitmap(N8, x, y, 0);
            break;
        case 9:
            al_draw_bitmap(N9, x, y, 0);
            break;
        }

        x += -16;
        recorde = recorde / 10;
    }
}

void desenhaVidas(int vidas)
{
    int x = 826;
    int y = 767;

    switch (vidas)
    {
    case 1:
        // desenha nada
        break;
    case 2:
        al_draw_bitmap(V1, x, y, 0);
        break;
    case 3:
        al_draw_bitmap(V2, x, y, 0);
        break;
    }
}

// Game Over -------------------------------------------------------------------------------------------------------------------------------------------------------------

void desenhaGameOver()
{
    al_draw_bitmap(gameOver, 140, -180, 0);
}

void desenhaGameOver2()
{
    al_draw_bitmap(gameOver2, 140, -180, 0);
}