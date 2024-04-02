#include<stdio.h>
char* check(int num) {
    if (num >= 10000) {
        if(num>20000) return "Gucci Bag\nGucci Belt";
        else{
            return "Gucci Bag";
        }
    } else if(num>=5000) {
        return "Levis Bag";
    }
    else{
        return "she will buy Something from New Market";
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