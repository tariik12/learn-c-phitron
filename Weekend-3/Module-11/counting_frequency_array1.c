#include<stdio.h>

int main()
{
   //start counting frequency array TODO

   int a;
   scanf("%d", &a);
   int ar[a];

   for(int i=0; i<a; i++ ){
scanf("%d", &ar[i]);
   }
int cnt[7]={0};
   for(int i=0; i<=6; i++){
    int val = ar[i];
cnt[val]++;
   }

    // printf("%d", cnt[1]);
   for(int i=0; i<5; i++){
    printf("%d - %d\n", i,  cnt[i]);
   }
    return 0;
}