typedef struct Bloco
{
    // Posicao do bloco
    int x, y;

    // Cor do bloco
    ALLEGRO_COLOR cor;

    // Dimensoes
    int w, h;
} Bloco;

void initBloco(Bloco *bloco)
{
    // Posicao do bloco
    bloco->x = SCREEN_W + rand() % (SCREEN_W);
    bloco->y = rand() % (SCREEN_H - SCREEN_H / 7);

    // Dimensoes do bloco
    bloco->w = BLOCO_W;
    bloco->h = BLOCO_H;

    // Cores do bloco
    bloco->cor = al_map_rgba(255, 0, 255, 0);
}

void desenhaBloco(Bloco bloco) // Desenhar a hitbox do bloco
{
    al_draw_filled_rectangle(bloco.x, bloco.y, bloco.x + bloco.w, bloco.y + bloco.h, bloco.cor);
}

void atualizaBloco(Bloco *bloco)
{
    // Velocidade do bloco
    bloco->x += -6;

    // Criar novo bloco quando o primeiro passar da tela
    if (bloco->x + bloco->w < 0)
        initBloco(bloco);
}
