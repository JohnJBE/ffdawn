#include <stdio.h>
void main(){
    int x;
    printf("digite um número");
    scanf("%d",&x);
    if(x == 0){
        printf("na próxima coloque número diferente de zero");
    }
    else if(x > 0){
        printf("%d é Positivo",x);
    }
    else{
        printf("%d é Negativo",x);
    }
}