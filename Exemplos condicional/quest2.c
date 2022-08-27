int main(){
    int n;
    scanf("%d", &n);

    switch(n%2){
        case 0: printf("Par\n");/*Faltou o break*/break;
        default: printf("Impar\n");
    }
    return 0;
}