#include <stdio.h>
#include <math.h>
typedef struct Pontox{
    float x1,x2;
}Pontox;
typedef struct Pontoy{
    float y1,y2;
}Pontoy;

void main(){
    Pontox Pontox;
    Pontoy Pontoy;
    printf("digite o Primeiro Ponto X:");
    scanf("%f",&Pontox.x1);
    printf("digite o Segundo Ponto X:");
    scanf("%f",&Pontox.x2);
    printf("digite o Primeiro Ponto Y:");
    scanf("%f",&Pontoy.y1);
    printf("digite o Segundo Ponto Y:");
    scanf("%f",&Pontoy.y2);
    float SubtracaoX = Pontox.x2 - Pontox.x1, SubtracaoY = Pontoy.y2 - Pontoy.y1;
    float QuadradoX = (SubtracaoX*SubtracaoX) , QuadradoY = (SubtracaoY * SubtracaoY);
    float dentrodaraiz = QuadradoX + QuadradoY;
    float Resultado = sqrt(dentrodaraiz);
    printf("A Distancia entre os dois pontos sao: %.2f",Resultado);
}