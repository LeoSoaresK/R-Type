void desenhaAsteroide(Bloco bloco)
{
    int frameAsteroide = al_get_timer_count(timerAsteroide) % 4;

    switch (frameAsteroide)
    {
    case 0:
        al_draw_bitmap(asteroide0, bloco.x - 90, bloco.y - 200, 0);
        break;
    case 1:
        al_draw_bitmap(asteroide1, bloco.x - 90, bloco.y - 200, 0);
        break;
    case 2:
        al_draw_bitmap(asteroide2, bloco.x - 90, bloco.y - 200, 0);
        break;
    case 3:
        al_draw_bitmap(asteroide3, bloco.x - 90, bloco.y - 200, 0);
        break;
    }
}