#include <stdio.h>
char RetornarValorPosOuNeg(int x){
    if(x > 0){
        return printf("P");
    } else {
        return printf("N");
    }
}
void main(){
    int Valor;
    printf("qual será o valor?");
    scanf("%d",&Valor);
    RetornarValorPosOuNeg(Valor);
}