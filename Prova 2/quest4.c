#include <stdio.h>
int main(void) {
int pedido, saldo;
scanf("%d %d", &pedido, &saldo);
  
  if (pedido==1){
   if(saldo>12) 
      {printf("Troco = %d reais",saldo-12);}
   if(saldo<12)
      {printf("Saldo insuficiente! Falta %d reais",12-saldo);}
   if(saldo==12) printf("Deu certim!");
    }
  if (pedido==2){
   if(saldo>23) 
      {printf("Troco = %d reais",saldo-23);}
   if(saldo<23)
      {printf("Saldo insuficiente! Falta %d reais",23-saldo);}
   if(saldo==23)printf("Deu certim!");
    }
  if (pedido==3){ 
   if(saldo>31) 
      {printf("Troco = %d reais",saldo-31);}
   if(saldo<31)
      {printf("Saldo insuficiente! Falta %d reais",31-saldo);}
  if(saldo==31)printf("Deu certim!");
    }
  if (pedido==4){
   if(saldo>28) 
      {printf("Troco = %d reais",saldo-28);}
   if(saldo<28)
      {printf("Saldo insuficiente! Falta %d reais",28-saldo);}
  if(saldo==28)printf("Deu certim!");
    }
  if (pedido==5){
   if(saldo>15) 
      {printf("Troco = %d reais",saldo-15);}
   if(saldo<15)
      {printf("Saldo insuficiente! Falta %d reais",15-saldo);}
   if(saldo==15)printf("Deu certim!");
    }
  return 0;
}