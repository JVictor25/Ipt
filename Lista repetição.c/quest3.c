#include <stdio.h>
#include <math.h>
int n, num, numero, i, j, v, po, k;
int main(void) {
  scanf("%d", &n);
  num=n;
while(num>=10){
  num=num/10;
  i++;}
  num=n;
  k=(i+1);
  for ( j = 0; j <=k; j++)
  {
 v=num%10;
 po=(pow(10,i));
 numero=(numero+(v*po));
i--;
num=num/10;
  }
  if(n==numero){printf("%d é Palíndromo e ",n);}
  else{printf("%d não é Palíndromo e ",n);}
  if((n%2)==0){printf("par.");}
  else{printf("impar.");}
  return 0;
} 