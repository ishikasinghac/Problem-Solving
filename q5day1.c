#include <stdio.h>

int main() {
    int d,m,y;
    printf("enter date: \n");
    scanf("%d",&d);
    printf("enter month: \n");
    scanf("%d" ,&m);
    printf("enter year: \n");
    scanf("%d",&y);
    //assuming 1-1-1900 to be monday
    int days_diff= ((y-1900)*365 + (m-1)*30 + (d-1));
    if( days_diff%7==0){
        printf("it is monday \n");
    }
    else if( days_diff%7==1){
        printf("it is tuesday \n");
    }
    else if(days_diff%7==2){
        printf("it is wednesday \n");
    }
    else if(days_diff%7==3){
        printf("it is thursday \n");
    }
    else if(days_diff%7==4){
        printf("it is friday \n");
    }
    else if(days_diff%7==5){
        printf("it is saturday \n");
    }
    else{
        printf("it is sunday \n");
    }
    return 0;
}