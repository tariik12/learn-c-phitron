#include<stdio.h>

int main()
{
    int a = 5, b = 2;
    
    // Addition
    int sum = a + b;
    printf("Sum: %d\n", sum);
    
    // Subtraction
    int sub = a - b;
    printf("Difference: %d\n", sub);
    

    // multiple
    int multi = a * b;
    printf("Multi: %d\n", multi);

    //divide
    int divide = a / b;
    printf("Divide: %d\n", divide);
    
    //divide float
    float dividef = a*1.0 / b;
    printf("Divide: %f\n", dividef);

    int mod = a % b;
    printf("Mod: %d", mod);
    return 0;
}
