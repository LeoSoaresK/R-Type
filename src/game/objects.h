// Cria nave
Nave nave;
int vidas;
bool naveAtingida;
int movimentoNave;

// Cria bloco
Bloco bloco;

// Cria tiro
Tiro tiro[10];
bool carregando;

// Cria inimigos
int quantidade = 6;
Inimigo inimigo[6];
int relogio;
int *ponteiroQuantidade;

// Cria interface
Interface interface;
int pontos;
int recorde;
bool armazenar;

// Ler recorde
FILE *topScore;

// Variaveis para controlar a dificuldade
float xTimer;
float xBackground;

void initObjects()
{
    // Nave
    initNave(&nave);
    vidas = 3;
    naveAtingida = false;
    movimentoNave = 0;

    // Bloco
    initBloco(&bloco);

    // Tiro
    initTiro(tiro, nave, NUM_BALAS);
    carregando = false;

    // Inimigos
    quantidade = 6;
    ponteiroQuantidade = &quantidade;
    initInimigo(inimigo, quantidade);

    // Interface
    initInterface(&interface);
    pontos = 0;
    recorde = 0;
    armazenar = false;

    // Recorde
    topScore = fopen("topScore.txt", "r");
    fscanf(topScore, "%d", &recorde);
    fclose(topScore);

    // Dificuldade
    al_start_timer(timerDificuldade);
    xTimer = 1.0;
    xBackground = 3.0;

    printf("\nVidas: %d", vidas);
}

void guardaRecorde()
{
    if (armazenar)
    {
        topScore = fopen("topScore.txt", "w");
        fprintf(topScore, "%d", recorde);
        fclose(topScore);
    }
}