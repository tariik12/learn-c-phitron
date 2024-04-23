#include <stdio.h>
#include <string.h>

int main() {
    char a[1000004];
    fgets(a, sizeof(a), stdin);

    int count = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            count += a[i] - '0'; 
        }
    }

    printf("%d\n", count);
    return 0;
}