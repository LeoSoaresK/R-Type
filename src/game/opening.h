void initOpening()
{
    ALLEGRO_EVENT ev;                    // Espera por um evento e o armazena na variavel de evento ev
    al_wait_for_event(event_queue, &ev); // Pausa o loop, aguardando pelo evento
    al_play_sample_instance(musicaAbertura_Instance);

    // Caso ocorra um evento de timer, ou seja, o tempo passou de t para t+1
    if (ev.type == ALLEGRO_EVENT_TIMER)
    {
        desenhaAbertura();
        al_draw_bitmap(logo, SCREEN_W / 2 - 380, 35, 0);
        al_draw_bitmap(by, SCREEN_W - 150, SCREEN_H - 20, 0);

        al_flip_display(); // Atualiza a tela (quando houver algo para mostrar)
    }

    // Caso ocorra um evento de fechar a tela
    else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
    {
        opening = 0; // Encerra o jogo
        game = 0;
    }

    // Caso ocorra um evento de tecla pressionada
    else if (ev.type == ALLEGRO_EVENT_KEY_DOWN)
    {
        // printf("\nCodigo tecla: %d", ev.keyboard.keycode); // Imprime qual tecla foi

        switch (ev.keyboard.keycode)
        {
        case ALLEGRO_KEY_ENTER:
            al_set_timer_count(pararAbertura, 0);
            opening = 0;
            start = 1;
            break;
        }
    }
}

void initStart()
{
    ALLEGRO_EVENT ev;                    // Espera por um evento e o armazena na variavel de evento ev
    al_wait_for_event(event_queue, &ev); // Pausa o loop, aguardando pelo evento
    al_start_timer(pararAbertura);

    al_play_sample(somEnter, 0.5, 0, 1, ALLEGRO_PLAYMODE_ONCE, 0);

    int frameStart = al_get_timer_count(pararAbertura) % 14;

    // Caso ocorra um evento de timer, ou seja, o tempo passou de t para t+1
    if (ev.type == ALLEGRO_EVENT_TIMER)
    {
        if (al_get_timer_count(pararAbertura) == 8)
        {
            al_stop_sample_instance(musicaAbertura_Instance);
        }

        if (al_get_timer_count(pararAbertura) == 14)
        {
            playing = 1;
            start = 0;
        }

        // Desenha start
        desenhaStart(frameStart);
        al_draw_bitmap(logo, SCREEN_W / 2 - 380, 35, 0);
        al_draw_bitmap(by, SCREEN_W - 150, SCREEN_H - 20, 0);

        // Atualiza a tela (quando houver algo para mostrar)
        al_flip_display();
    }

    // Caso ocorra um evento de fechar a tela
    else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
    {
        start = 0; // Encerra o jogo
        game = 0;
    }
}