#include <stdio.h>
 
int main() {
 int i, j, k, l, n, aux;
  scanf("%d", &n);
 int alunos[n];
 char a[n];
 char b[n];
 char c[n];
 float nota[n];
 int alunosapro[n];
 int alunosrec[n];
 int alunosrep[n];
 float notaapro[n];
 float notarec[n];
 float notarep[n];
  j=0;
  k=0;
  l=0;
 for(i=0; i<n; i++){
   scanf("%d", &alunos[i]);
   scanf("%c", &a[i]);
   scanf("%c", &b[i]);
   scanf("%c", &c[i]);
   scanf("%f", &nota[i]);}
 for(i=0; i<n; i++){
   if (nota[i]>=7){
     notaapro[j]=nota[i];
     alunosapro[j]=alunos[i];
     j++;
     }
   else if (nota[i]>=5.0){
     notarec[k]=nota[i];
     alunosrec[k]=alunos[i];
     k++;
     }
   else{
     notarep[l]=nota[i];
     alunosrep[l]=alunos[i];
     l++;
     }
   }
  printf("Aprovados: ");
  for (i = 0; i < j; i++) {
        if (i<(j-1)){
        printf("%d (%.1f), ", alunosapro[i], notaapro[i]);}
        else { printf("%d (%.1f)", alunosapro[i], notaapro[i]);}}
  printf("\nRecuperação: ");
  for (i = 0; i < k; i++) {
       if (i<(k-1)){
        printf("%d (%.1f), ", alunosrec[i], notarec[i]);}
        else { printf("%d (%.1f)", alunosrec[i], notarec[i]);}}
  printf("\nReprovados: ");
  for (i = 0; i < l; i++) {
      if (i<(l-1)){
        printf("%d (%.1f), ", alunosrep[i], notarep[i]);}
        else { printf("%d (%.1f)", alunosrep[i], notarep[i]);}}
 return 0;
}