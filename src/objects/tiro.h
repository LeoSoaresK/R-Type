typedef struct Tiro
{

    // Posicao do tiro
    int x, y;

    // Velocidade
    int velocidade;

    // Ativacao do tiro
    bool ativo;
    bool carregando, carregado;
    int carga;

    // Cor
    ALLEGRO_COLOR cor;

    // Tamanho do tiro
    int w;
    int h;

} Tiro;

void initTiro(Tiro tiro[], Nave nave, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        tiro[i].velocidade = 10;
        tiro[i].ativo = false;
        tiro[i].carregando = false;
        tiro[i].carregado = false;
        tiro[i].w = 20;
        tiro[i].h = 10;
        tiro[i].cor = al_map_rgba(0, 255, 0, 255);
    }
}

void segura(Tiro tiro[], Nave nave, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (!tiro[i].ativo && !tiro[i].carregando)
        {
            tiro[i].x = nave.x + NAVE_W + 15;
            tiro[i].y = nave.y + (NAVE_H / 2) + 5;
            tiro[i].carregando = true;
            break;
        }
    }
}

void carregaTiro(Tiro tiro[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (!tiro[i].ativo && tiro[i].carregando)
        {
            tiro[i].carga += 1;
        }

        if (tiro[i].carga == 75)
        {
            tiro[i].carregado = true;
        }
    }
}

void atira(Tiro tiro[], Nave nave, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (!tiro[i].ativo && tiro[i].carregando)
        {
            tiro[i].ativo = true;
            tiro[i].carregando = false;
            tiro[i].carga = 0;
            break;
        }
    }
}

void atualizaTiro(Tiro tiro[], int tamanho, Bloco bloco, Nave nave)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (tiro[i].carregando)
        {
            tiro[i].x = nave.x + NAVE_W + 15;
            tiro[i].y = nave.y + (NAVE_H / 2) + 5;

            if (tiro[i].carregado)
            {
                tiro[i].y += -5;
                tiro[i].w = 40;
                tiro[i].h = 20;
                tiro[i].cor = al_map_rgba(255, 0, 255, 255);
            }
        }

        if (tiro[i].ativo)
        {
            tiro[i].x += tiro[i].velocidade;
        }

        // Passou da tela
        if (tiro[i].x > SCREEN_W)
        {
            tiro[i].ativo = false;
            tiro[i].carregado = false;
            tiro[i].cor = al_map_rgba(0, 255, 0, 255);
            tiro[i].w = 20;
            tiro[i].h = 10;
        }

        // Colidiu com bloco
        if (tiro[i].x + tiro[i].w >= bloco.x && tiro[i].x <= bloco.x + BLOCO_W) // Testar igualdade no eixo x
        {
            if (tiro[i].y + tiro[i].h >= bloco.y && tiro[i].y <= bloco.y + BLOCO_H && !tiro[i].carregado) // Testar igualdade no eixo y
                tiro[i].ativo = false;
        }
    }
}

void desenhaTiro(Tiro tiro[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (tiro[i].ativo || tiro[i].carregando)
        {
            al_draw_filled_rectangle(tiro[i].x, tiro[i].y, tiro[i].x + tiro[i].w, tiro[i].y + tiro[i].h, tiro[i].cor);
        }
    }
}