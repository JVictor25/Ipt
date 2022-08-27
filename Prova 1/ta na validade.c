#include <stdio.h>
int main(int argc, char const *argv[])
{
   int dias, meses, anos, tempo;

   scanf("%d", &tempo);
   dias = (tempo%365)%30 ;
   meses = (tempo%365)/30;
   anos = tempo/365;

   printf("%d ano(s)\n", anos);
   printf("%d mes(es)\n", meses);
   printf("%d dia(s)\n", dias);
    return 0;
}