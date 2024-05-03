#include<stdio.h>
void fun(double *ar, int n){
    for(int i=0; i<n; i++){
        printf("%0.2lf ", ar[i]);
    }
}
int main()
{
   double ar[5]={10.52,25,36,15,28};
//    int sz=sizeof(ar)/ sizeof(int);
//    printf("%d\n", sz);
//    printf("%d\n", sizeof(ar));
//    printf("%d\n", sizeof(int));
fun(ar,5);
    return 0;
}