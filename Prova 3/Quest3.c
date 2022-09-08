#include <stdio.h>
double i, tempo_corte, tempo;
int baterias, competidores;
int main(void) {
 scanf("%lf %lf", &tempo_corte, &tempo);
while(tempo!=-1){
    if ((tempo_corte>=tempo)&&(tempo!=-1))
    {competidores++;}
  scanf("%lf", &tempo);}
  baterias=competidores/8;
  if (competidores>0){baterias++;}
  if ((competidores%8)==0){baterias--;}
  if (competidores==0){baterias=0;}
  printf("%d %d", competidores, baterias);
  return 0;
}