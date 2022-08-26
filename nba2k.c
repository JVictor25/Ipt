 /*Converso de medida nba2k*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
   
   double pesok, pesol;
   double alturam, alturap;
   /*Vamos ler medida em libras e pés*/
   printf("Informe a altura em pes:\n");

   scanf("%lf", &alturap);

   printf("Informe o peso em libras:\n");

   scanf("%lf", &pesol);
   /*Transformar para kilos e metros */
   pesok=(pesol * 0.454);

   alturam=(alturap * 0.3038);
   /*Imprir esse respectivos valores*/
   printf("a altura em metros é %.2lf\n", alturam);

   printf("o peso em kilos é %.2lf\n", pesok);

    return 0;
}