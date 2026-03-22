#include <stdio.h>

int main() {
    int nilai[5];

    for(int i=0;i<5;i++) {
        printf("Nilai ke-%d: ", i+1);
        scanf("%d",&nilai[i]);
    }

    printf("\nHistogram:\n");
    for(int i=0;i<5;i++) {
        printf("%d: ", nilai[i]);
        for(int j=0;j<nilai[i]/10;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}