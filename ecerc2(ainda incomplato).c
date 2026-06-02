#include <stdio.h>
int ItemA(int x){
        if(x>0){
            for(int c = 0; c < x; c++){
                printf("   %d",x);
            }
        }
}
int ItemB(int x){
    if(x>0){
        for(int c = 1; c < x; c--){
            printf("%d",c);
        }
    }
}
void main(){
    ItemA(10);
}