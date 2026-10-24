#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int main_sayi = rand()%100 + 1;
    int user_sayi;
    int deneme = 0;

    printf("1-100 arasinda bir sayi girin: ");
    scanf("%d", &user_sayi);

    while(user_sayi != main_sayi){
        if (user_sayi<main_sayi)
        {
            deneme += 1;
            printf("\nGirdiginiz sayi hedef sayidan kucuk. Yeni sayi girin: ");
            scanf("%d", &user_sayi);
        }

        else{
            deneme += 1;
            printf("\nGirdiginiz sayi hedef sayidan buyuk. Yeni sayi girin: ");
            scanf("%d", &user_sayi);
        }
    }

    deneme += 1;
    printf("\nTebrik ederim girdiginiz sayi tam olarak hedef sayiya esit. %d denemede buldunuz.\n", deneme);
    printf("%d", main_sayi);

    return 0;
}