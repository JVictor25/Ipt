#include <stdio.h>
int main(void) {
int equipes, i, corrida, salto, lancamento;
corrida=0;
salto=0;
lancamento=0;
char provas, F='F', C='C', S='S', L='L';

scanf("%d", &equipes);
for(i=0;i<equipes;i++){
    
  scanf("%c",&provas);
while (provas!=F){
    if(provas==C){corrida++;}
    if(provas==S){salto++;}
    if(provas==L){lancamento++;}
    scanf("%c", &provas);}}
    printf("%d %d %d %d", corrida, salto, lancamento, corrida+salto+lancamento);
  return 0;
}