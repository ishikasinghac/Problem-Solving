#include <stdio.h>

int main() {
    float x,y;
    printf("enter (x,y): \n");
    scanf("%f%f", &x,&y);
    if(x>0 && y==0){
        printf("lies on x-axis \n");
    }
    else if(x==0 && y>0){
        printf("lies on y axis \n");
    }
    else if(x>0 && y>0){
        printf("lies in first quadrant \n");
    }
    else if(x<0 && y>0){
        printf("lies in second quadrant \n");
    }
    else if(x<0 && y<0){
        printf("lies in third quadrant \n");
    }
    else{
        printf("lies in fourth quadrant \n");
    }
    return 0;

}  