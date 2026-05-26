#include <stdio.h>
#include <stdlib.h>
void main(){
    int anos,meses,dias,diasTotais;
    printf("Quantos anos você tem?");
    scanf("%d",&anos);
    printf("Quantos meses você tem?");
    scanf("%d",&meses);
    printf("Quantos dias você tem?");
    scanf("%d",&dias);
    diasTotais = (anos * 365) + (meses * 30) + dias;
    printf("Você tem no total %d dias de vida",diasTotais);
}