#include <stdio.h>
void bubble_sort (int vetor[], int n) {
    int k, j, p, aux;
do{
for (k = 0; k < n; k++) {
  printf("%d ", vetor[k]);}
  printf("\n");
for (j = 0; j < n - 1; j++) {
  if (vetor[j] > vetor[j + 1]) {
            aux          = vetor[j];
            vetor[j]     = vetor[j + 1];
            vetor[j + 1] = aux;}}
    p++;}while(p<n);
}
int main() {
 int i, j, num, aux;
 scanf("%d", &num);
 int numeros[num];
 scanf("%d", &numeros[0]);
 for(i=1; i<num; i++){
   scanf("%d", &numeros[i]);}
 
bubble_sort(numeros,num);
 return 0;
}
