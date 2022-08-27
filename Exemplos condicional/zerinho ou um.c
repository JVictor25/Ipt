#include <stdio.h>
int main(int argc, char const *argv[])
{
    int thor, starlord, homen_aranha;
    scanf("%d %d %d ", &thor, &starlord, &homen_aranha);
   if (thor==starlord && thor==homen_aranha)
   {
    printf("Empate");
   }
   else
   {
    if (thor==starlord)
    {
        printf("Homem-Aranha");
    }
    if (thor==homen_aranha)
    {
        printf("Star Lord");
    }
    if (homen_aranha==starlord)
    {
        printf("Thor");
    }
   }
return 0;}