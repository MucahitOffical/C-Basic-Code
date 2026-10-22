#include <stdio.h>

int main() {
    int kok;
    int sayac;
    int space;

    printf("Temeli kaç olan bir ağaç istiyorsun ? ");
    scanf("%d", &kok);

    if(kok % 2 == 0){
        space = (kok-2)/2;
        sayac = 2;
    }

    else{
        space = (kok-1)/2;
        sayac = 1;
    }

    while(sayac <= kok){
        for(int i = 0;i<space;i++){
            printf(" ");
        }

        for(int i = 0; i<sayac; i++){
            printf("*");
        }
        
        printf("\n");

        sayac += 2;
        space -= 1;
    }
        
    return 0;
}