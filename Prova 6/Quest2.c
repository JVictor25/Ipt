#include <stdio.h>
 
int main() {
 int i, n=1, m=0, j, x, y; 
scanf("%d", &x);
 int matriz[x][x];
 int mat[x][x];
  for(j=0; j<x; j++){
 for(i=0; i<x; i++){
   mat[j][i]=0;}}
 for(j=0; j<x; j++){
 for(i=0; i<x; i++){
    n=1;
    m=0;
    if ((j==m)||(i==m)||(j==(x-n))||(i==(x-n))) {matriz[j][i]=m+1;}
    else {
      if ((x%2)==0){
      while (m<(x/2)){
    if (((j==m)||(i==m)||(j==(x-n))||(i==(x-n)))&&mat[j][i]==0) {matriz[j][i]=m+1; mat[j][i]++;}
    n++;
    m++;} 
      }
      else{while (m<((x/2)+1)){
    if (((j==m)||(i==m)||(j==(x-n))||(i==(x-n)))&&mat[j][i]==0) {matriz[j][i]=m+1; mat[j][i]++;}
    n++;
    m++;
          }
         }
        }
       }
      }
    for(j=0; j<x; j++){
    for(i=0; i<x; i++){
        printf("%d ", matriz[j][i]);
    }printf("\n");
 }
}