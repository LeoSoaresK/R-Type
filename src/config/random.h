int random(int n) // funcao para gerar um numero aleatorio de 0 ate n-1
{
    return rand() % n;
}

int randInt(int min, int max) // funcao para gerar um numero aleatorio entre min e max
{
    return min + random(max - min + 1);
}