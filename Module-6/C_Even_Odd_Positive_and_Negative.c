#include<stdio.h>

int main()
{
   int n;
   scanf("%d", &n);
   int a;
   int even =0, odd=0, pos=0, neg=0;
   for(int i=1; i<=n; i++){
    scanf("%d", &a);
    if(a%2==0){
        even++;
    }else {
        odd++;
    }
     if(a>0){
        pos++;
    }
    else if(a<0 || a%2 == -1){
        neg++;
    }
   }
   printf("Even: %d\n",even);
   printf("Odd: %d\n",odd);
   printf("Positive: %d\n",pos);
   printf("Negative: %d\n",neg);
    return 0;
}