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