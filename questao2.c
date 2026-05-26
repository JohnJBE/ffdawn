#include <stdio.h>
#include <stdlib.h>
void main(){
    int x,y,z;
    printf("Me diga um número");
    scanf("%d",&x);
    printf("\nMe diga outro número");
    scanf("%d",&y);
    printf("\nMe diga outro número");
    scanf("%d",&z);
    if(x > y && x > z){
        printf("\n %d é o maior", x);
    }
    else if((x==y && x==z) || (y==z && y==x)){
        printf("ninguém é maior");
    }
    else if(y > x && y > z){
        printf("\n %d é o maior", y);
    }
    else{
        printf("\n %d é o maior", z);
    }
}