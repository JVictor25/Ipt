#include <stdio.h>

int main(void) {
  int x1, y1, x2, y2, x, y;
  scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x, &y);
  if (((x<x1)||(x>x2))||((y<y1)||(y>y2)))printf("Fora!");
  else printf("Dentro!");

  return 0;
}