#include <stdio.h>

int main() {
    float t;
    printf("enter temperature: \n");
    scanf("%f", &t);
    if(t<0){
        printf("Freezing \n");
    
    }
    else if (t<=10 && t>0){
        printf("very cold \n");
    }
    else if(t<=20 && t>10){
        printf("cold temp \n");
    }
    else if(t<=30 && t>20){
        printf("normal temp \n");
    }
    else if(t<=40 && t>30){
        printf("hot \n");
    }
    
    else{
        printf("very hot \n");
    }
    return 0;
}