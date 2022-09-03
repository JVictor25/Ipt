#include <stdio.h>
int Vidro, Plástico, Papel, Orgânico, Metal, Eletrônicos, i;
char l;

int main(void) {
  for(i=0;i==10;i++){
    scanf("%c", &l);
  switch(l){
    case 'V': Vidro++;break;
    case 'L': Vidro++;break;
    case 'P': Vidro++;break;
    case 'O': Vidro++;break;
    case 'M': Vidro++;break;
    case 'E': Vidro++;break;}
    }
  printf("Vidros: %d Plásticos: %d Papeis: %d Orgânicos: %d Metais: %d Eletrônicos: %d", Vidro, Plástico, Papel, Orgânico, Metal, Eletrônicos);
  return 0;
}