#include <stdio.h>
//peguei da IA msm pq n sei fazer multiplicação de matriz nem na matematica imagina programando
#define M 2
#define N 3 
#define P 2 

int main() {
    
    int A[M][N] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    
    int B[N][P] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int C[M][P];

   
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            C[i][j] = 0;
        }
    }


    for (int i = 0; i < M; i++) {          
        for (int j = 0; j < P; j++) {      
            for (int k = 0; k < N; k++) {  
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Matriz Resultante C:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}