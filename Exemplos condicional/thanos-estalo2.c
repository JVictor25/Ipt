#include <stdio.h>
int main(int argc, char const *argv[])
{
    int petalas, herois;
    scanf("%d %d", &petalas, &herois);
    if ((petalas%2)==0)
    {
    printf("Mal me quer! Estalo! Morra: ");
    switch (herois)
    {
    case 0:printf("Iron Man");break;
    case 1:printf("Capitão América");break;
    case 2:printf("Homem-Aranha");break;
    case 3:printf("Viúva Negra");break;
    case 4:printf("Thor");break;
    case 5:printf("Hulk");break;
    case 6:printf("Dr. Estranho");break;
    case 7:printf("Pantera Negra");break;
    case 8:printf("Hawkeye");break;
    case 9:printf("GROOT");break;
    default:break;}
    }
    else{
    printf("Bem me quer! #xatiado");  
    }
return 0;}