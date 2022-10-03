#include <stdio.h>

int main() {
  char jogo[3][3];

  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
      scanf(" %c", &jogo[i][j]);
    }
  }
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    char a;
    int y, x, linhaT, colunaT, diagonalAT, diagonalBT;
    linhaT = colunaT = diagonalAT = diagonalBT = 0;
    scanf(" %d %d", &y, &x);
    scanf(" %c", &a);
    y--;
    x--;
    if (jogo[x][y]!='.'){
    printf("Jogada inválida!");}
    else{
        jogo[x][y]=a;
if ((jogo[0][0]==jogo[1][0])&&(jogo[1][0]==jogo[2][0])&&(jogo[0][0]!='.')){printf("Boa jogada, vai vencer!");}
else if ((jogo[0][1]==jogo[1][1])&&(jogo[1][1]==jogo[2][1])&&(jogo[0][1]!='.')){printf("Boa jogada, vai vencer!");}
else if ((jogo[0][2]==jogo[1][2])&&(jogo[1][2]==jogo[2][2])&&(jogo[0][2]!='.')){printf("Boa jogada, vai vencer!");}
  
else if ((jogo[0][0]==jogo[0][1])&&(jogo[0][1]==jogo[0][2])&&(jogo[0][0]!='.')){printf("Boa jogada, vai vencer!");}
else if ((jogo[1][0]==jogo[1][1])&&(jogo[1][1]==jogo[1][2])&&(jogo[1][0]!='.')){printf("Boa jogada, vai vencer!");}
else if ((jogo[2][0]==jogo[2][1])&&(jogo[2][1]==jogo[2][2])&&(jogo[2][0]!='.')){printf("Boa jogada, vai vencer!");} 
  
else if ((jogo[0][0]==jogo[1][1])&&(jogo[1][1]==jogo[2][2])&&(jogo[1][1]!='.')){printf("Boa jogada, vai vencer!");}
else if ((jogo[0][2]==jogo[1][1])&&(jogo[1][1]==jogo[2][0])&&(jogo[1][1]!='.')){printf("Boa jogada, vai vencer!");}
else{printf("Continua o jogo.");}
  jogo[x][y]='.';}
  printf("\n");}
}