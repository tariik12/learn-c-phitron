#include<stdio.h>
char* check(int num) {
    if (num > 0) {
        return "Positive";
    } else if(num==0) {
        return "Zero";
    }
    else{
        return "Negative";
    }
}
int main()

{
    int num;

scanf("%d", &num);


char* result = check(num);
printf("%s\n",result);


return 0;
}