#include<stdio.h>
#include<string.h>
int main()
{
   char a[100];
   scanf("%s", a);

int cnt[26]={0};
for(int i = 0; i<strlen(a); i++){
    // printf("%d \n", a[i]-'a');
    cnt[a[i]-'a']++;
    
}

for(int i=0; i<strlen(a); i++){
    // start count from "a to z" -------------------------------------
    //  printf("%c == %d \n", i+'a', cnt[i]);
    // end count from "a to z" ---------------------------------------------

    // start count which value is true from "a to z" -------------------------------
//    if(cnt[i]!=0){
//     int value =cnt[i]-;
//      printf("%c == %d \n", i+'a', cnt[i]);
//    }
    // end count which value is true from "a to z" -------------------------

    // start count which value is true from "a to z" ---- TODO
    int value =a[i]-'a';
     printf("%c == %d \n", value+'a', cnt[i]);
   if(cnt[i]!=0){
   }
    // end count which value is true from "a to z" ----
}
    return 0;
}