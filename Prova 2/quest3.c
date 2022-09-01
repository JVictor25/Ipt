#include <stdio.h>

int main(void) {
int quant, classe, nivel;
scanf("%d %d %d", &quant, &classe, &nivel);
  
  if (nivel==1){
   if((quant>=1 && classe>=2)||(quant>=3 &&classe>=1)){
     printf("Heróis vencerão!");}
   else{
       printf("Melhor chamar Saitama!");}
    }
  if (nivel==2){
   if((quant>=1 && classe>=3)||(quant>=3 && classe>=2)) 
      {printf("Heróis vencerão!");}
   else 
      {printf("Melhor chamar Saitama!");}
    }
  if (nivel==3){ 
   if((quant>=1 && classe>=4)||(quant>=3 && classe>=3)) 
      {printf("Heróis vencerão!");}
   else 
      {printf("Melhor chamar Saitama!");}
    }
  if (nivel==4){
   if((quant>=1 && classe>=5)||(quant>=3 && classe>=4))
      {printf("Heróis vencerão!");}
   else 
      {printf("Melhor chamar Saitama!");}
    }
  if (nivel==5)
   {if (quant>0 && classe==5){printf("Heróis vencerão!");}
     else printf("Melhor chamar Saitama!");}
  return 0;
}