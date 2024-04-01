#include <stdio.h>

int main()

{
    int tk;
    scanf("%d", &tk);
    if(tk>=100){
        printf("I will eat apple");
    }else if(tk>=50){
        printf("I will eat banana");
    }else if(tk>=30){
printf("I will eat potato");
    } else{
        printf("I will not eat");
    }
}