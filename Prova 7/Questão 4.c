#include <stdio.h>
#include <string.h>
int neut(int c[], int X){
    for(int i = 0; i<X; i++){
        c[i] = -1;}return (c, X);}
int main(){
  char palavras_base[100];
  int N, M, I = 0, F = 0, c = 0, cont = 0;
  int caracteres_pbase[100];
  neut(caracteres_pbase, 100);
  
  scanf("%i ", &N);
  char prefixos[N][10];
  int letras_pre[N];
  neut(letras_pre, N);

  for(int i = 0; i < N; i++){
    for(int j = 0; j < 10; j++){
        scanf("%c", &prefixos[i][j]);
        letras_pre[i]++;
        if(prefixos[i][j] == '\n'){
            break;}}
  }
  
  scanf("%i ", &M);
  char sufixos[M][10];
  int letras_su[M];
  neut(letras_su, M);

  for(int i = 0; i < M; i++){
    for(int j = 0; j < 10; j++){
        scanf("%c", &sufixos[i][j]);
        letras_su[i]++;
        if(sufixos[i][j] == '\n'){
            break;}}}
  
  while(c != -1){
    
    for(int i = 0; i < 100; i++){
        scanf("%c", &palavras_base[i]);
        caracteres_pbase[c]++;
        if(palavras_base[i] == '\n'){
            break;}}
    
    I = 0;
    F = caracteres_pbase[c];
    
    if(palavras_base[0] == '-' && palavras_base[1] == '1'){
        exit(0);}
     
    for(int i = 0; i < N; i++){
        for(int j = 0; j < letras_pre[i]; j++){
            if(prefixos[i][j] != palavras_base[j]){
                j = letras_pre[i];
                break;}
            if((letras_pre[i]-1) == j){
                I = (letras_pre[i]);}}}
    for(int i = 0; i < M; i++){
        cont = caracteres_pbase[c]-1;
        for(int j = letras_su[i]-1; j >= 0; j--){
            if(sufixos[i][j] != palavras_base[cont]){
                j = -1;
                break;}
            if((j-1) == -1){
              F = (cont);
              i = M;
              break;}
            cont--;}}    
    for(int i = I; i < F; i++){
        printf("%c", palavras_base[i]);}
    printf("\n");
    c++;}}