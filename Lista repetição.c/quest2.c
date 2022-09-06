#include <stdio.h>
double valor, valortotal;
int quant, quanttotal;
int main(void) {
  scanf("%d", &quant);
while(quant >= 0){
  scanf("%lf", &valor);
  quanttotal=quanttotal+quant;
  valortotal=valortotal+(valor*quant);
  scanf("%d", &quant);}
  printf("%d %.2lf", quanttotal, valortotal);
  return 0;
}