#include <stdio.h>
 
int main() {
 int i, j, x, y; 
 double agua=0, deserto=0, vegetacao=0, recursos=0, hostis=0, peragua, perdeserto, pervegetacao, perrecursos, perhostis, pertotal;
 char matriz[x][y];
 for(j=0; j<y; j++){
 for(i=0; i<x; i++){
   scanf("%d", &matriz[i][j]);}}
 for(j=0; j<y; j++){
 for(i=0; i<x; i++){
   if ((matriz[i][j])=='~')agua++;
   if ((matriz[i][j])=='X')hostis++;
   if ((matriz[i][j])=='^')deserto++;
   if ((matriz[i][j])=='*')vegetacao++;
   if ((matriz[i][j])=='.')recursos++;
   }}
   pertotal=x*y;
   peragua=((agua/pertotal)*100);
   perhostis=((hostis/pertotal)*100);
   perdeserto=((deserto/pertotal)*100);
   pervegetacao=((vegetacao/pertotal)*100);
   perrecursos=((recursos/pertotal)*100);
if ((peragua>=50)&&(pervegetacao>=20)&&(perhostis==0)) {printf("Planeta Classe M");}
else if (perhostis>0) {printf("Planeta Hostil");}
else if ((peragua>=50)&&(pervegetacao>=20)&&(perhostis==0)) {printf("Planeta Classe M");}
else if (peragua>=85) {printf("Planeta Aquático");}
else if (perdeserto>=60) {printf("Planeta Desértico");}
else if (pervegetacao>=60) {printf("Planeta Selvagem");}
else {printf("Planeta Inóspito");}
 return 0;
}