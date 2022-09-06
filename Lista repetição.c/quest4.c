#include <stdio.h>
#include <math.h>
double i, num, mediaA, anos, div;
int main(void) {
  scanf("%lf", &anos);
  div=anos;
for(i=0; i<anos; i++){
    scanf("%lf", &num);
  if(num>=0){
    mediaA=num+mediaA;}
  else div--;
  }
  mediaA=mediaA/div;
  printf("%.2lf\n", mediaA);
  return 0;
}