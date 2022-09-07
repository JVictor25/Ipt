#include <stdio.h>
int i, num, k, n, h, j, l;
char letra;
int main(void) {
  scanf("%d %c", &num, &letra);
  h=(((num-1)/2)-1);
  i=h;
  j=0;
  if (num%2!=0){
    for(k=0; k<=((num/2)-1); k++){
      for(n=0; n<(j); n++)
          {printf(" ");}
        printf("%c", letra);
        for(n=0; n<i ; n++)
          {printf(" ");}
        for(n=0; n<i ; n++)
          {printf(" ");}
        printf("%c\n", letra);
      l=j;
      j++;
      i=(i-1);
      }
  i=h;
  for(k=0; k<=((num/2)-1); k++){
    for(n=0; n<(l); n++)
          {printf(" ");}
        printf("%c", letra);
        for(n=h; n>i ; n--)
          {printf(" ");}
        for(n=h; n>i ; n--)
          {printf(" ");}
        printf("%c\n", letra);
    l--;
    i=(i-1);}}
  else {
    for(k=0; k<=((num/2)-1); k++){
      for(n=0; n<(j); n++)
          {printf(" ");}
        printf("%c", letra);
        for(n=-1; n<i ; n++)
          {printf(" ");}
      if (n<i) printf(" ");
        for(n=0; n<i ; n++)
          {printf(" ");}
        if(k<((num/2)-1)){printf("%c\n", letra);}
      l=j;
      j++;
      i=(i-1);
      }
  i=h;
  l=l-1;
  for(k=1; k<=((num/2)-1); k++){
    printf("\n");
    for(n=0; n<(l); n++)
          {printf(" ");}
        printf("%c", letra);
        for(n=(h+1); n>i ; n--)
          {printf(" ");}
        for(n=h; n>i ; n--)
          {printf(" ");}
        printf("%c", letra);
    l--;
    i=(i-1);
    
  }}
  return 0;
}