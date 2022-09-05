#include <stdio.h>
int i, jogos, golsmarcados, golssofridos, golsjogador, a;
char x, para1, para2;
int main(void) {
    scanf("%d", &jogos);
for(i=0; i<jogos; i++){scanf("%d %c %d %c %d %c", &golsmarcados, &x, &golssofridos, &para1, &golsjogador, &para2);
if (golsjogador>0)a++;}
if (a==jogos) printf("Artilheiro");
else printf("Perna de Pau");
  return 0;
}