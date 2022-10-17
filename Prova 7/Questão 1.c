#include <stdio.h>
#include <string.h>

#define t 301

int posicaol(char l, char msg[]){
  int pos=-1,i=0;
  while(msg[i]!='\0'){
    if(msg[i]==l){
      pos=i;
      break;
    }
    i++;
  }
  return pos;
}

int main(void) {
  const char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' ', '\0'};

  char msgcript[t], msg[t], l;
  int posicao, i, soma[4], tammsg, proxposicao, nsoma, num;

  scanf("%d\n", &num);

  if(num>9999){
    printf("Chave invalida!\n");
  } else {
    soma[0] = (int)(num/1000);
    num-=(1000*soma[0]);
    soma[1] = (int)(num/100);
    num-=(100*soma[1]);
    soma[2] = (int)(num/10);
    num-=(10*soma[2]);
    soma[3] = (int)(num/1);
    num-=(1*soma[3]);

    fgets(msg, 301, stdin);
    tammsg=(int)strlen(msg)-1;
    msg[tammsg]='\0';

    for(i=0; i<tammsg; i++){
      l = msg[i];
      nsoma=(int)(i%4);
      posicao=posicaol(l, S);

      if (posicao == -1){
        break;
      }
      proxposicao=(int)((posicao+soma[nsoma])%40);
      msgcript[i]=S[proxposicao];
    }
    if (posicao==-1){
      printf("Caractere invalido na entrada!\n");
    } else{
      msgcript[i]='\0';
      printf("%s\n", msgcript);
    }
  }
  return 0;
}
