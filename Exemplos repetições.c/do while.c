#include <stdio.h>
int n1, n2;
char op;
int main(void) {
do{scanf("%d %c %d", &n1, &op, &n2);
  switch(op){
  case '+' : printf("%d\n", n1+n2); break;
  case '-' : printf("%d\n", n1-n2); break;
  case '*' : printf("%d\n", n1*n2); break;
  case '/' :if(n2==0)printf("indefinido\n");else printf("%d\n", n1/n2); break;
  }}while(op!='F');
  return 0;
}