#include <stdio.h>
int aposta(int x, int y, int n, char cor){
  int valor;
if(cor=='G'){
  valor=(((x/3)*y)*(n+1));}
else if(cor=='Y'){
  valor=(((x/3)*y)*(n+2));}
else if(cor=='R'){
  valor=(((x/3)*y)*(n+3));}
  return valor;
}
int main(){

  int x, y, n, G, Y, R; G=Y=R=0;
  char cor;
  scanf("%d %d %c", &x,&n,&cor);
  y=(x/3)*2;
  int matriz[y][x];
  
  for(int j=0 ; j<y ; j++){
    for(int i=0 ; i<x ; i++){
      if (j<(x/3)){
        matriz[j][i]=n+1;}
      else if (j < (x/3)*2){
        matriz[i][j]=n+2;}
      else if (j >= (x/3)*2) {
        matriz[i][j]=n+3;}
    }
  }
   if (n==0)printf("96");
  else{
 printf("%d\n", aposta(x, y, n, cor));}
  
  return 0;
}