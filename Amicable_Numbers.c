#include <stdio.h>

int main(){

    int sayib = 0, sayik = 0, countk = 0, countb = 0;

    while(sayib <= 0 || sayik <= 0){
        printf("Iki sayi giriniz: ");
        scanf("%d %d", &sayib, &sayik);
    }

    for (int i = 1; i<sayib; i++){
        if (sayib % i == 0){
            countk += i;
        }
    }

    for (int i = 1; i<sayik; i++){
        if (sayik % i == 0){
            countb += i;
        }
    }

    if(sayik == countk && sayib == countb){
        printf("%d ve %d dost sayilardir.",sayib, sayik);
    }

    else{
        printf("%d ve %d dost sayilar degildir.",sayib, sayik);
    }

    return 0;
}