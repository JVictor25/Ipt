#include <stdio.h>
#include <math.h>
double i, num,mediaA, mediaH, mediaG, erro_harmonico, erro_geometrico, erro_medio;
int main(void) {
  mediaG=1;
for(i=0; i<10; i++){
    scanf("%lf", &num);
  mediaA=num+mediaA;
  mediaG=num*mediaG;
  num=pow(num, -1);
  mediaH=num+mediaH;}
  mediaA=mediaA/10;
  mediaG=pow(mediaG,(1.0/10));
  mediaH=10/mediaH;
  printf("Média aritmética é %.2lf\n", mediaA);
  printf("Média harmônica é %.2lf\n", mediaH);
  printf("Média Geométrica é %.2lf\n", mediaG);
  erro_harmonico=(mediaH-mediaA)/mediaA;
  erro_geometrico=(mediaG-mediaA)/mediaA;
  erro_medio=(erro_harmonico+erro_geometrico)/2;
  printf("Erro médio é %.2lf %% \n", erro_medio*100);
  return 0;
}