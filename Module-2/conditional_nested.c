#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 5000){
        printf("We will go to Cox's\n");
        if(tk >=10000){
printf("We will go to Sentmartin\n");
        }else{
            printf("We will go to back Dhaka.\n");
        }

    }else{
        printf("We will go to cox's next year.\n");
    }
}