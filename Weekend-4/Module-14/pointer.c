// #include<stdio.h>

// int main()
// {
//    int x=10;
//    int *p=&x;
//    printf("%p\n", p);
//    printf("%d\n", *p);
//     return 0;
// }


#include <stdio.h>
int sum(int x, int y)
{
    int res = x + y;
    return res;
}
int main()
{
    sum(5, 6);
    return 0;
}
