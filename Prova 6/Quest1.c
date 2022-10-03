#include <stdio.h>
 
int main() {
 int i, j, x, y; 
 double agua=0, deserto=0, vegetacao=0, recursos=0, hostis=0, peragua, perdeserto, pervegetacao, perrecursos, perhostis, pertotal;
   scanf("%d %d", &x, &y);
 char matriz[x][y];
 for(j=0; j<=x; j++){
 for(i=0; i<y; i++){
   scanf("%c", &matriz[j][i]);}}
 for(j=0; j<=x; j++){
 for(i=0; i<y; i++){
   if ((matriz[j][i])=='~')agua++;
   if ((matriz[j][i])=='X')hostis++;
   if ((matriz[j][i])=='^')deserto++;
   if ((matriz[j][i])=='*')vegetacao++;
   if ((matriz[j][i])=='.')recursos++;
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