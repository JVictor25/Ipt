#include <stdio.h>
void bubble_sort(int vetor[], int tamanho){
	int aux, i, j;
	for(j=tamanho-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                    vetor[i]=vetor[i+1];
                    vetor[i+1]=aux;
            }
        }
    }
}    
int main() {
 int i, j, k=0, x, y, n, m, aux=0;
 scanf("%d %d", &n, &m);
 int lista1[n], lista2[m], lista3[n+m];
 for(i=0; i<n; i++){
   scanf("%d", &lista1[i]);}
    for(i=0; i<m; i++){
   scanf("%d", &lista2[i]);}
for(i=0; i<n; i++){
  x=lista1[i];
  aux=0;
    for(j=0; j<m; j++){
      y=lista2[j];
        if ((x)==(y)){ aux++;}}
        if (aux==0){
            lista3[k]=x;
            k++;}}
for(i=0; i<m; i++){
  x=lista2[i];
  aux=0;
    for(j=0; j<n; j++){
      y=lista1[j];
        if ((x)==(y)){ aux++;}}
        if (aux==0){
            lista3[k]=x;
            k++;}}
  for (i = 0; i < k; i++) {
bubble_sort(lista3,k);
for (i = 0; i < k; i++) {
        printf("%d ", lista3[i]);
        }
 return 0;
}}