#include <stdio.h>

int main() {
    char value;
    printf("enter value: \n");
    scanf("%c" ,&value);
    int ascii=(int) value;
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122 )
    {
    
        if(value== 'a' || value == 'e' || value== 'i' || value== 'o' || value== 'u')
        {
            printf("vowel \n");
        }
        else if(value== 'A'|| value=='O'|| value=='E'|| value=='I'||value=='U'){
            printf("VOWEL \n");
        }
        else{
            printf("consonants \n");
        }
    } 
    else{
        printf("not an alphabet \n");
    }  
    return 0;
}