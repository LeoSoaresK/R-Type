typedef struct Interface
{
    // Posicao
    int x, y;

    // Dimensoes
    int w, h;

    // Cor
    ALLEGRO_COLOR cor;

    // Ativa
    bool ativa;

} Interface;

void initInterface(Interface *interface)
{
    // Posicao
    interface->x = 396;
    interface->y = 772;

    // Dimensoes
    interface->w = 0;
    interface->h = 7;

    // Cor
    interface->cor = al_map_rgba(0, 112, 226, 255);

    // Barra
    interface->ativa = false;
}

void desenhaInterface(Interface interface)
{
    al_draw_filled_rectangle(interface.x, interface.y, interface.x + interface.w, interface.y + interface.h, interface.cor);
}

void atualizaInterface(Interface *interface, Tiro tiro[], int tamanho)
{
    if (interface->ativa && interface->w <= 395)
    {
        interface->w += 5.1;
    }
    else if (!interface->ativa)
    {
        interface->w = 0;
    }
}

void ativaInterface(Interface *interface)
{
    interface->ativa = true;
}

void desativaInterface(Interface *interface)
{
    interface->ativa = false;
}
