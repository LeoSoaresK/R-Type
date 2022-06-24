void initEnd()
{
    ALLEGRO_EVENT ev;                    // Espera por um evento e o armazena na variavel de evento ev
    al_wait_for_event(event_queue, &ev); // Pausa o loop, aguardando pelo evento

    al_start_timer(timerEnd);

    al_play_sample_instance(musicaEnd_Instance);

    // Caso ocorra um evento de timer, ou seja, o tempo passou de t para t+1
    if (ev.type == ALLEGRO_EVENT_TIMER)
    {
        if (armazenar)
            desenhaGameOver2();
        else
        {
            desenhaGameOver();
        }

        if (al_get_timer_count(timerEnd) == 5)
        {
            al_stop_timer(timerEnd);
            al_set_timer_count(timerEnd, 0);
            al_stop_sample_instance(musicaEnd_Instance);
            end = 0;
            opening = 1;
        }

        // Atualiza a tela (quando houver algo para mostrar)
        al_flip_display();
    }

    // Caso ocorra um evento de fechar a tela
    else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
    {
        end = 0; // Encerra o jogo
        game = 0;
    }
}