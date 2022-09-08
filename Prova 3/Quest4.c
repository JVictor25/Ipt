#include <stdio.h>
int equipes, i, comp, corrida, salto, lançamento;
char provas;
int main(void) {
 scanf("%d", &equipes);
for(i=0; i<equipes; i++){
while (provas!='F'){
  scanf("%c", &provas);
    if(provas=='C'){corrida++; comp++;}
    if(provas=='S'){salto++; comp++;}
    if(provas=='L'){lançamento++; comp++;}}}
    printf("%d %d %d %d", corrida, salto, lançamento, comp);
  return 0;
}