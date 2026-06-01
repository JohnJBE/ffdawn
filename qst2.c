#include <stdio.h>

typedef struct Pessoa{
    char nome[100];
    int idade;
    char endereco[300];
}Pessoa;
void main(){
    Pessoa p1;
    printf("Me diga seu nome:");
    scanf(" %[^\n]s",p1.nome);
    printf("\n Quantos Anos Vc tem?");
    scanf(" %d",&p1.idade);
    printf("\nonde o senhor mora?");
    scanf(" %[^\n]s",p1.endereco);
    printf("------------------------");
    printf("\nSeu Nome: %s",p1.nome);
    printf("\nSua Idade: %d",p1.idade);
    printf("\nSeu Endereço: %s",p1.endereco);
}