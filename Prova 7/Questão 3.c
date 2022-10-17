#include <stdio.h>
#include <string.h>

int main(void) {
  char string[50], ministring[50];
  int aux=0, i, j, k, l=0, soma[50], tamstring, tamministring;
  
    fgets( string, 51, stdin);
    fgets( ministring, 51, stdin);
    tamstring=(int)strlen(string);
    tamministring=(int)strlen(ministring);
    string[tamstring]='\0';
    ministring[tamministring]='\0';
  for(i=0; i<(tamstring-tamministring); i++){
    for(j=0; j<tamministring; j++){
      if (string[i+j]==ministring[j]){
      printf("%c ", string[i+j]);
        if(j==tamministring-1){
          printf("sim\n");l=1; j=tamministring;
        }}
      else {printf("%c não\n",string[i+j]);
        aux=0;
        for(k=0; k<tamministring; k++){
          if(string[i+j]!=ministring[k]){aux++;}}
          if(aux==(tamministring)){i=i+j;}
          break;}}
  if(l==1){printf("Achei o padrão no índice %d", i); i=tamstring;}}
  if(l!=1){
    printf("Não achei o padrão");
  }
  return 0;
}