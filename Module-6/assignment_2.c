#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n=10;
    scanf("%d", &n);
    if(n<0){
        for(int i=n-1; i<0; i--){
            printf("%d ", i);
        }
    }
        else{
            for(int i=1; i<=n; i++){
                printf("%d ", i);
        }
    }
    
     
    return 0;
}