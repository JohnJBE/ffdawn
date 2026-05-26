#include <stdio.h>
void main()
{
    int matrizA[2][2] = {{8, 4},{5, 2}}, matrizB[2][2] = {{4, 5}, {10, 3}},matrizC[2][2];
    for(int x = 0; x < 2;x++){/*[[8,4],         [[4,5],
                                [5,2]]          [10,3]]*/
        for(int y = 0; y < 2;y++){
            if(matrizA[x][y] >= matrizB[x][y]){
                matrizC[x][y] = matrizA[x][y];
            } else{
                matrizC[x][y] = matrizB[x][y];
            }
        }
    }
    for (int i = 0; i < 2; i++){
        for (int o = 0; o < 2; o++){
            printf("\n %d",matrizC[i][o]);
        }
        
    }
    
}