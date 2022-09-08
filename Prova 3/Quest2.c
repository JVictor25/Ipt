#include <stdio.h>
int i, num, k, h;
int main(void) {
 scanf("%d", &num);
 if (num<=0)printf("Você entrou com %d, tente de novo na próxima", num);
 else{
for(i=0; i<=num; i++){
    h++;
for(i=0; i<h; i++){
    k++;
    if(k<10)printf(" %d ", k);
    else printf("%d ", k);}
    printf("\n");
    }}
  return 0;
}