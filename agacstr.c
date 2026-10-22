#include <stdio.h>

int main(){
    int str;

    printf("Kac satirlik agac istiyorsun ? ");
    scanf("%d", &str);

    for(int i = 1;i <= str; i++){
        for(int b = 0; b<= str-i; b++){
            printf(" ");
        }

        for(int y = 0; y < 2*i -1; y++){
            printf("*");
        }
        printf("\n");
    }
}