typedef struct Nave
{
    // Posicao da nave
    int x, y;

    // Cor da nave
    ALLEGRO_COLOR cor;

    // Direcoes
    int dir_x;
    int dir_y;

    // Ivulneravel
    bool ivulneravel;

} Nave;

void initNave(Nave *nave)
{
    // Posicao da nave
    nave->x = 50 + NAVE_W;
    nave->y = SCREEN_H / 2;

    // Movimento da nave
    nave->dir_x = 0;
    nave->dir_y = 0;

    // Cor da nave
    nave->cor = al_map_rgba(255, 0, 255, 0);

    // Ivulneravel
    nave->ivulneravel = false;
}

void desenhaNave(Nave nave) // Desenhar a hitbox da nave
{
    al_draw_filled_rectangle(nave.x, nave.y, nave.x + NAVE_W, nave.y + NAVE_H, nave.cor);
}

void atualizaNave(Nave *nave)
{
    if (nave->y == -BOUNDS) // Limitar movimento para cima
    {
        nave->y += VELOCIDADE_NAVE;
    }

    if (nave->y == SCREEN_H - 85) // Limitar movimento para baixo
    {
        nave->y += -VELOCIDADE_NAVE;
    }

    nave->y += nave->dir_y; // Atualizar y

    if (nave->x == -BOUNDS) // Limitar movimento para esquerda
    {
        nave->x += VELOCIDADE_NAVE;
    }

    if (nave->x + NAVE_W == 1200 + BOUNDS) // Limitar movimento para direita
    {
        nave->x += -VELOCIDADE_NAVE;
    }

    nave->x += nave->dir_x;
}

void paraCima(Nave *nave) // Dirigir para cima
{
    nave->dir_y += -VELOCIDADE_NAVE;
}

void paraBaixo(Nave *nave) // Dirigir para baixo
{
    nave->dir_y += VELOCIDADE_NAVE;
}

void paraDireita(Nave *nave) // Dirigir para direita
{
    nave->dir_x += VELOCIDADE_NAVE;
}

void paraEsquerda(Nave *nave) // Dirigir para esquerda
{
    nave->dir_x += -VELOCIDADE_NAVE;
}