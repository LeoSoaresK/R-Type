void atualizaDesenhoNave(Nave nave, int movimentoNave)
{
    if (movimentoNave == 0)
    {
        al_draw_bitmap(nave0, nave.x, nave.y - 16, 0);
    }
    if (movimentoNave == 1)
    {
        al_draw_bitmap(nave2, nave.x, nave.y - 16, 0);
    }
    if (movimentoNave == -1)
    {
        al_draw_bitmap(nave5, nave.x, nave.y - 16, 0);
    }
}