// Variaveis globais allegro

ALLEGRO_DISPLAY *display = NULL;         // Comando para criar o display
ALLEGRO_EVENT_QUEUE *event_queue = NULL; // Comando para criar a fila de eventos
ALLEGRO_TIMER *timer = NULL;             // Comando para criar o timer
ALLEGRO_TIMER *timerBackground = NULL;   // Comando para criar o timerBackground
ALLEGRO_TIMER *timerAsteroide = NULL;    // Comando para criar o timerAsteroide
ALLEGRO_TIMER *timerAbertura = NULL;     // Comando para criar o timerAbertura
ALLEGRO_TIMER *pararAbertura = NULL;     // Comando para criar o pararAbertura
ALLEGRO_TIMER *timerInimigo = NULL;      // Comando para criar o timerInimigo
ALLEGRO_TIMER *timerTiro = NULL;         // Comando para criar o timerTiro
ALLEGRO_TIMER *timerDificuldade = NULL;  // Comando para criar o timerDificuldade
ALLEGRO_TIMER *timerIvulneravel = NULL;  // Comando para criar o timerIvulneravel
ALLEGRO_TIMER *timerEnd = NULL;          // Comando para criar o timerEnd

// Inicializa variaveis de controle das fases do jogo
bool opening = 1;
bool start = 0;
bool playing = 0;
bool end = 0;
bool game = 1;

int initAllegro()
{
    al_set_blender(ALLEGRO_ADD, ALLEGRO_ALPHA, ALLEGRO_INVERSE_ALPHA);

    srand(time(NULL));

    // Inicializa o Allegro
    if (!al_init())
    {
        fprintf(stderr, "failed to initialize allegro!\n");
        return -1;
    }

    // Cria uma tela com dimensoes de SCREEN_W, SCREEN_H pixels
    display = al_create_display(SCREEN_W, SCREEN_H);
    if (!display)
    {
        fprintf(stderr, "failed to create display!\n");
        return -1;
    }

    // Instala o teclado
    if (!al_install_keyboard())
    {
        fprintf(stderr, "failed to install keyboard!\n");
        return -1;
    }

    // Instala o mouse
    if (!al_install_mouse())
    {
        fprintf(stderr, "failed to initialize mouse!\n");
        return -1;
    }

    // Inicializa o módulo de primitivas do Allegro
    if (!al_init_primitives_addon())
    {
        fprintf(stderr, "failed to initialize primitives!\n");
        return -1;
    }

    // Inicializa o modulo que permite carregar imagens no jogo
    al_init_image_addon();

    // Inicializa o modulo que permite carregar sons no jogo
    al_install_audio();
    al_init_acodec_addon();

    // Cria um temporizador que incrementa uma unidade a cada 1.0/FPS segundos
    timer = al_create_timer(1.0 / FPS);
    if (!timer)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria um temporizador que incrementa uma unidade a cada 3.0/FPS segundos
    timerBackground = al_create_timer(3 / FPS);
    if (!timerBackground)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria um temporizador que incrementa uma unidade a cada 30/FPS segundos
    timerAsteroide = al_create_timer(30 / FPS);
    if (!timerAsteroide)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria um temporizador que incrementa uma unidade a cada 13/FPS segundos
    timerAbertura = al_create_timer(13 / FPS);
    if (!timerAbertura)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria um temporizador que incrementa uma unidade a cada 13/FPS segundos
    pararAbertura = al_create_timer(13 / FPS);
    if (!pararAbertura)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria um temporizador que incrementa uma unidade a cada 10/FPS segundos
    timerInimigo = al_create_timer(18 / FPS);
    if (!timerInimigo)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria um temporizador que incrementa uma unidade a cada 120/FPS segundos
    timerTiro = al_create_timer(120 / FPS);
    if (!timerTiro)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria um temporizador que incrementa uma unidade a cada 121/FPS segundos
    timerIvulneravel = al_create_timer(121 / FPS);
    if (!timerIvulneravel)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria um temporizador que incrementa uma unidade a cada 3/FPS segundos
    timerDificuldade = al_create_timer(3 / FPS);
    if (!timerDificuldade)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria um temporizador que incrementa uma unidade a cada 119/FPS segundos
    timerEnd = al_create_timer(119 / FPS);
    if (!timerEnd)
    {
        fprintf(stderr, "failed to create timer!\n");
        return -1;
    }

    // Cria a fila de eventos
    event_queue = al_create_event_queue();
    if (!event_queue)
    {
        fprintf(stderr, "failed to create event_queue!\n");
        al_destroy_display(display);
        return -1;
    }

    // Especifica quais eventos serao registrados na fila
    al_register_event_source(event_queue, al_get_display_event_source(display)); // Eventos de tela (Ex: Clicar no X para fechar)
    al_register_event_source(event_queue, al_get_keyboard_event_source());       // Eventos de teclado
    al_register_event_source(event_queue, al_get_mouse_event_source());          // Eventos de mouse
    al_register_event_source(event_queue, al_get_timer_event_source(timer));     // Eventos de tempo decorrido

    // Inicia o temporizador
    al_start_timer(timer);
    al_start_timer(timerBackground);
    al_start_timer(timerAsteroide);
    al_start_timer(timerAbertura);
    al_start_timer(timerInimigo);
}