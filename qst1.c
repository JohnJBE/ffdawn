#include <stdio.h>
typedef struct Horario{
    int horas;
    int minutos;
    int segundos;
}Horario;
typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;
typedef struct Compromisso{
    Horario Horario;
    Data Data;
    char sobre[300];
}Compromisso;
void main(){
    Compromisso pizzaria = {{19,30,0},{24,7,2026},"Ir pra pizzaria com meus amigos"};
    printf("\n COMPROMISSO MARCADO:\n");
    printf("Dia: %d",pizzaria.Data.dia);
    printf(" Mes: %d",pizzaria.Data.mes);
    printf(" Ano: %d",pizzaria.Data.ano);
    printf("\nHoras: %d",pizzaria.Horario.horas);
    printf(" Minutos: %d",pizzaria.Horario.minutos);
    printf(" Segundos: %d",pizzaria.Horario.segundos);
    printf("\nMais Detalhes: %s",pizzaria.sobre);
}