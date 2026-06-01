#include <stdio.h>

typedef struct Aluno{
    char nome[100];
    int matricula,n1,n2,n3;
}Aluno;

void main(){
    //Peguei dengue nesse dia e minha logica tava Rudimentar
    Aluno Estudantes[5];
    for(int x = 0;x < 5; x++ ){
        printf("Digite o Nome do Estudante:");
        scanf(" %[^\n]",Estudantes[x].nome);
        printf("Digite a Matricula dele:");
        scanf("%d",&Estudantes[x].matricula);
        printf("Digita a Nota da 1° Prova:");
        scanf("%d",&Estudantes[x].n1);
        printf("Digita a Nota da 2° Prova:");
        scanf("%d",&Estudantes[x].n2);
        printf("Digita a Nota da 3° Prova:");
        scanf("%d",&Estudantes[x].n3);
    }
    printf("\n----------------------------------\n");
    
        if(Estudantes[0].n1 >= Estudantes[1].n1 && Estudantes[0].n1 >= Estudantes[2].n1 && Estudantes[0].n1 >= Estudantes[3].n1 && Estudantes[0].n1 >= Estudantes[4].n1){
            printf("\nO Aluno com a Maior nota na primeira prova foi: %s",Estudantes[0].nome);
        }
        if(Estudantes[1].n1 >= Estudantes[0].n1 && Estudantes[1].n1 >= Estudantes[2].n1 && Estudantes[1].n1 >= Estudantes[3].n1 && Estudantes[1].n1 >= Estudantes[4].n1){
            printf("\nO Aluno com a Maior nota na primeira prova foi: %s",Estudantes[1].nome);
        }
        if(Estudantes[2].n1 >= Estudantes[0].n1 && Estudantes[2].n1 >= Estudantes[1].n1 && Estudantes[2].n1 >= Estudantes[3].n1 && Estudantes[2].n1 >= Estudantes[4].n1){
            printf("\nO Aluno com a Maior nota na primeira prova foi: %s",Estudantes[2].nome);
        }
        if(Estudantes[3].n1 >= Estudantes[0].n1 && Estudantes[3].n1 >= Estudantes[1].n1 && Estudantes[3].n1 >= Estudantes[2].n1 && Estudantes[3].n1 >= Estudantes[4].n1){
            printf("\nO Aluno com a Maior nota na primeira prova foi: %s",Estudantes[3].nome);
        }
        if(Estudantes[4].n1 >= Estudantes[0].n1 && Estudantes[4].n1 >= Estudantes[1].n1 && Estudantes[4].n1 >= Estudantes[2].n1 && Estudantes[4].n1 >= Estudantes[3].n1){
            printf("\nO Aluno com a Maior nota na primeira prova foi: %s",Estudantes[4].nome);
        }
        int media[5];
        media[0] = (Estudantes[0].n1 + Estudantes[0].n2 + Estudantes[0].n3)/3;
        media[1] = (Estudantes[1].n1 + Estudantes[1].n2 + Estudantes[1].n3)/3;
        media[2] = (Estudantes[2].n1 + Estudantes[2].n2 + Estudantes[2].n3)/3;
        media[3] = (Estudantes[3].n1 + Estudantes[3].n2 + Estudantes[3].n3)/3;
        media[4] = (Estudantes[4].n1 + Estudantes[4].n2 + Estudantes[4].n3)/3;
        printf("\n----------------------------------\n");
        for(int z = 0; z < 5; z++){ 
                if(z == 0){
                    if(media[z] >= media[z+1] && media[z] >= media[z+2] && media[z] >= media[z+3] && media[z]>=media[z+4]){
                    printf("o aluno com a maior media foi: %s",Estudantes[z].nome);
                    break;
                } 
                }
                if(z == 1){
                    if(media[z] >= media[z-1] && media[z] >= media[z+1] && media[z] >= media[z+2] && media[z] >= media[z+3]){
                        printf("o aluno com a maior media foi: %s",Estudantes[z].nome);
                        break;
                    }
                }
                if(z == 2){
                    if(media[z] >= media[z-2] && media[z] >= media[z-1] && media[z] >= media[z+1] && media[z] >= media[z+2]){
                        printf("o aluno com a maior media foi: %s",Estudantes[z].nome);
                        break;
                    }
                }
                if(z == 3){
                    if(media[z] >= media[z-3] && media[z] >= media[z-2] && media[z] >= media[z-1] && media[z] >= media[z+1]){
                        printf("o aluno com a maior media foi: %s",Estudantes[z].nome);
                        break;
                    }
                }
                if(z == 4){
                    if(media[z] >= media[z-4] && media[z] >= media[z-3] && media[z] >= media[z-2] && media[z] >= media[z-1]){
                        printf("o aluno com a maior media foi: %s",Estudantes[z].nome);
                        break;
                    }
                }
            
        }
        printf("\n---------------\n");
        for(int z = 0; z < 5; z++){ 
                if(z == 0){
                    if(media[z] <= media[z+1] && media[z] <= media[z+2] && media[z] <= media[z+3] && media[z]<=media[z+4]){
                    printf("o aluno com a menor media foi: %s",Estudantes[z].nome);
                    break;
                } 
                }
                if(z == 1){
                    if(media[z] <= media[z-1] && media[z] <= media[z+1] && media[z] <= media[z+2] && media[z] <= media[z+3]){
                        printf("o aluno com a menor media foi: %s",Estudantes[z].nome);
                        break;
                    }
                }
                if(z == 2){
                    if(media[z] <= media[z-2] && media[z] <= media[z-1] && media[z] <= media[z+1] && media[z] <= media[z+2]){
                        printf("o aluno com a menor media foi: %s",Estudantes[z].nome);
                        break;
                    }
                }
                if(z == 3){
                    if(media[z] <= media[z-3] && media[z] <= media[z-2] && media[z] <= media[z-1] && media[z] <= media[z+1]){
                        printf("o aluno com a menor media foi: %s",Estudantes[z].nome);
                        break;
                    }
                }
                if(z == 4){
                    if(media[z] <= media[z-4] && media[z] <= media[z-3] && media[z] <= media[z-2] && media[z] <= media[z-1]){
                        printf("o aluno com a menor media foi: %s",Estudantes[z].nome);
                        break;
                    }
                }
            
        }
        for(int w = 0; w < 5; w++){
            printf("Aluno: %s", Estudantes[w].nome);
            if(media[w] >= 6){
                printf("Atual Situação: Aprovado");
            } else{
                printf("Atual Situação: Reprovado");
            }
            
        }
    }