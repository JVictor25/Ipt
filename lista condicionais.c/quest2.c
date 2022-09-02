
#include <stdio.h>

int main(void) {
  int a, b, c, d, e;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  e = (a+b+c+d);
  if (e==0)printf("Ei! Ninguém colocou nada!\n", a);
  if (e%26==1)printf("Letra: A");
  if (e%26==2)printf("Letra: B");
  if (e%26==3)printf("Letra: C");
  if (e%26==4)printf("Letra: D");
  if (e%26==5)printf("Letra: E");
  if (e%26==6)printf("Letra: F");
  if (e%26==7)printf("Letra: G");
  if (e%26==8)printf("Letra: H");
  if (e%26==9)printf("Letra: I");
  if (e%26==10)printf("Letra: J");
  if (e%26==11)printf("Letra: K");
  if (e%26==12)printf("Letra: L");
  if (e%26==13)printf("Letra: M");
  if (e%26==14)printf("Letra: N");
  if (e%26==15)printf("Letra: O");
  if (e%26==16)printf("Letra: P");
  if (e%26==17)printf("Letra: Q");
  if (e%26==18)printf("Letra: R");
  if (e%26==19)printf("Letra: S");
  if (e%26==20)printf("Letra: T");
  if (e%26==21)printf("Letra: U");
  if (e%26==22)printf("Letra: V");
  if (e%26==23)printf("Letra: W");
  if (e%26==24)printf("Letra: X");
  if (e%26==25)printf("Letra: Y");
  if (e>0&&(e%26==0))printf("Letra: Z");
  
    
  return 0;
}