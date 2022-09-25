#include <stdio.h>
 
int main() {
 int numeros[6];
 int i, j, num, aux;
  j=0;
 scanf("%d", &num);
 scanf("%d", &numeros[0]);
 for(i=1; i<num; i++){
   scanf("%d", &numeros[i]);}
 
 for(i=1; i<num; i++){
   aux=((numeros[i]-numeros[(i-1)])%2);
 if (aux!=0){
   j++;}}
 if (j>0) printf("Chato");
   else printf("Legal");
 return 0;
}


