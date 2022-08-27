#include <stdio.h>
int main(int argc, char const *argv[])
{
   char letra;
   int vezes;
   double indice, popularidade;
    scanf("%c %d %lf", &letra, &vezes, &indice);
    popularidade=(vezes*indice);
    printf("A popularidade de %c é %.1lf", letra, popularidade);

    return 0;
}