#include <stdio.h>
int Vidro, Plástico, Papel, Orgânico, Metal, Eletrônicos, i;
char l;
int main(void) 
{
  for(i=0; i<g10; i++){
    scanf("%c", &l);
  switch(l){
    case 'V': Vidro++;break;
    case 'L': Plástico++;break;
    case 'P': Papel++;break;
    case 'O': Orgânico++;break;
    case 'M': Metal++;break;
    case 'E': Eletrônicos++;break;}
    }
  printf("Vidros: %d Plásticos: %d Papeis: %d Orgânicos: %d Metais: %d Eletrônicos: %d", Vidro, Plástico, Papel, Orgânico, Metal, Eletrônicos);
  return 0;
}