#include <stdio.h>
#include <math.h>

int get_digit(int sayi){
    int basamak = (int) (log10(abs(sayi))) + 1;
    
    return basamak; 
}

void is_palindrom(int sayi, int *pal) {
    int orijinal = sayi;
    int ters = 0;

    while (sayi > 0){
        ters = ters*10 + sayi%10;
        sayi = sayi / 10;
    }

    if (ters != orijinal){
        *pal = 0;
    }
}


void is_biggest_asal(int sayi, int *kont, int *rekont){

    int i = 2;
    int ckont = 0;

    while (i < sayi)
    {
        if(sayi % i == 0){
            *rekont = 1;
            for (int j = 2; j < i; j++){
                if(i % j == 0){
                    ckont = 1;
                    break;
                }
            }

            if (ckont == 0){
                *kont = i;
            }

            else{
                ckont = 0;
            }
        }

        i++;
    }
    
}


int main() {

    int num = 0;
    int palindrom = 1;
    int casal = 0;
    int asalmi = 0;

    printf("Bir sayi girin: ");
    scanf("%d", &num);

    while (num < 100){
        printf("Lutfen en az 3 basamakli bir sayi giriniz: \n");
        scanf("%d", &num);
    }

    is_palindrom(num, &palindrom);

    is_biggest_asal(num, &casal, &asalmi);
    
    if(palindrom == 1){
        printf("\n%d bir palindrom sayidir.\n", num);
    }
    else{
        printf("\n%d bir palindrom sayi degildir.\n", num);
    }

    if (casal != 0){
        printf("%d'nin en buyuk asal carpani %d'dir.", num, casal);
    }

    else if (casal == 0 && asalmi != 1){
        printf("%d'nin en buyuk asal carpani kendisidir.", num);
    }

    return 0;
}