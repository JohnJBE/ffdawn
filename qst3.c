#include <stdio.h>

typedef struct Aluno{
    char Nome[100];
    int Matricula;
    char NomeDoCurso[100];
}Aluno;

void main(){
    Aluno Alunos[5];
    for (int i = 0; i < 5; i++){
        printf("Digite o seu Nome:");
        scanf(" %[^\n]",Alunos[i].Nome);
        printf("Digite a matricula do seu Aln:");
        scanf("%d",&Alunos[i].Matricula);
        printf("Digite o Nome do Curso dele:");
        scanf(" %[^\n]",Alunos[i].NomeDoCurso);
    }
    printf("\nNOME, MATRICULA E CURSOS DOS ALUNO:");
    for(int p = 0;p < 5;p++){
        printf("%s, %d, %s",Alunos[p].Nome,Alunos[p].Matricula,Alunos[p].NomeDoCurso);
        printf("\n---------------------------------------------------");
    }
    
}