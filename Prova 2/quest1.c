#include <stdio.h>

int main(void) {
  int num, a, b, c, d, e, f;
  scanf("%d", &num);
if (num>100000){
  a= num/100000;
  b= (num % 100000)/10000;
  c= (num % 10000)/1000;
  d= (num % 1000)/100;
  e= (num % 100)/10;
  f= num % 10;
  
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);
  printf("%d\n", f);
}
else if (num>10000){
  a= num/10000;
  b= (num % 10000)/1000;
  c= (num % 1000)/100;
  d= (num % 100)/10;
  e= (num % 10);
  
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);
}
else if (num>1000){
  a= num/1000;
  b= (num % 1000)/100;
  c= (num % 100)/10;
  d= (num % 10);
  
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%d\n", d);
}
else if (num>100){
  a= num/100;
  b= (num % 100)/10;
  c= (num % 10);
 
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
    }
else if (num>10){
  a= num/10;
  b= (num % 10);
    
  printf("%d\n", a);
  printf("%d\n", b);
    }
else printf("%d",num);
return 0;
}