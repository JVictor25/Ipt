#include <stdio.h>
#include <string.h>

int main(void) {
  const char S[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',', '?', ' ', '\0'};

  char msgcript[201], msg[201], l;
  int posicao, i, soma[4], tammsg, auxx, proxposicao, nsoma, num;
  int pa, pb, pc, pd;
  
    fgets(msg, 201, stdin);
    tammsg=(int)strlen(msg)-1;

    msg[tammsg]='\0';
  int nposi[tammsg];
  for(i=0; i<tammsg; i++){
      l = msg[i];
    int pos=-1,k=0;
  while(S[k]!='\0'){
    if(S[k]==l){
      pos=k;}
    k++;
  }
      nposi[i]=pos;}
    for(int j=0; j<tammsg; j++){
     for(int a=0; a<10; a++){
        if ((nposi[j]==(26+a))&&(nposi[j+4]==(10+a))){      
         for(int b=0; b<10; b++){
            if ((nposi[j+1]==(30+b))&&((nposi[j+5]==(39))||(nposi[j+5]==(b-1)))){             
             for(int c=0; c<10; c++){
                if ((nposi[j+2]==(14+c))&&(nposi[j+6]==(15+c))){                
                 for(int d=0; d<10; d++){
                    if (((nposi[j+3]==(39))||(nposi[j+3]==(d-1)))&&(nposi[j+7]==(24+d))){
                    pa=((j)%4);
                    pb=((j+1)%4);
                    pc=((j+2)%4);
                    pd=((j+3)%4);
                    if (pa==0){
                    num=((a*1000)+(b*100)+(c*10)+d);}
                    else if (pb==0){
                    num=((b*1000)+(c*100)+(d*10)+a);}
                    else if (pc==0){
                    num=((c*1000)+(d*100)+(a*10)+b);}
                    else if (pd==0){
                    num=((d*1000)+(a*100)+(b*10)+c);}
                    auxx=1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      } 
  if (auxx!=1){printf("Mensagem nao e da Resistencia!");}
  else{
    printf("%04d\n", num);
    soma[0] = (int)(num/1000);
    num-=(1000*soma[0]);
    soma[1] = (int)(num/100);
    num-=(100*soma[1]);
    soma[2] = (int)(num/10);
    num-=(10*soma[2]);
    soma[3] = (int)(num/1);
    num-=(1*soma[3]);

    for(i=0; i<tammsg; i++){
      l = msg[i];
      nsoma=(int)(i%4);
      int k=0;
  while(S[k]!='\0'){
    if(S[k]==l){
      posicao=k;
    }
    k++;
  }
      if (posicao == -1){
        break;
      }
      
      proxposicao=(int)((posicao-soma[nsoma])%400);
      if(proxposicao==-1){msgcript[i]=S[39];}
      else if(proxposicao==-2){msgcript[i]=S[38];}
      else if(proxposicao==-3){msgcript[i]=S[37];}
      else if(proxposicao==-4){msgcript[i]=S[36];}
      else if(proxposicao==-5){msgcript[i]=S[35];}
      else if(proxposicao==-6){msgcript[i]=S[34];}
      else if(proxposicao==-7){msgcript[i]=S[33];}
      else if(proxposicao==-8){msgcript[i]=S[32];}
      else if(proxposicao==-9){msgcript[i]=S[31];}
      else {msgcript[i]=S[proxposicao];}
    }
  msgcript[i]='\0';
  printf("%s\n", msgcript);}
  return 0;
}