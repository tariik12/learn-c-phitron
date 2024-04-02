#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

    
}

// second solution ----------------------------------------

// #include <stdio.h>

// // Function to check if a number is even or odd
// char* checkEvenOdd(int num) {
//     if (num % 2 == 0) {
//         return "even";
//     } else {
//         return "odd";
//     }
// }

// int main() {
//     int num;

//     // Taking input from the user
//     printf("Enter a non-negative integer: ");
//     scanf("%d", &num);

//     // Checking if the number is even or odd
//     char* result = checkEvenOdd(num);
//     printf("%s\n", result);

//     return 0;
// }