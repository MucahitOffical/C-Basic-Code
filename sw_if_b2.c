#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int cesit_sayi = 0;
    float indirim = 0.0;
    int toplam_adet = 0;
    int toplam_fiyat = 0;

    printf("Kac cesit yemek alacaksiniz: ");
    scanf("%d", &cesit_sayi);

    int yemek[cesit_sayi];
    int adet[cesit_sayi];

    for(int i = 0; i<cesit_sayi; i++){
        printf("\nLutfen bir yemek ve adetini secin: \n[1]Pilav = 100\n[2]Kuru = 110\n[3]Doner = 150\n[4]Pizza = 250\n");
        scanf("%d %d", &yemek[i], &adet[i]);
        toplam_adet += adet[i];
    }

    if(toplam_adet <= 0){
        printf("Gecersiz siparis!\n");
    }

    else if(toplam_adet < 5 && toplam_adet >= 0){
        indirim = 1;
    }

    else if(toplam_adet < 7 && toplam_adet >= 5){
        indirim = 0.7;
    }

    else{
        indirim = 0.5;
    }

    for(int i = 0; i<cesit_sayi; i++){
        switch (yemek[i])
        {
        case 1:
            printf("%d adet pilav icin fatura %d'dir.\n", adet[i], 100*adet[i]);
            toplam_fiyat += 100*adet[i];
            break;

        case 2:
            printf("%d adet kuru icin fatura %d'dir.\n", adet[i], 110*adet[i]);
            toplam_fiyat += 110*adet[i];
            break;

        case 3:
            printf("%d adet doner icin fatura %d'dir.\n", adet[i], 150*adet[i]);
            toplam_fiyat += 150*adet[i];
            break;

        case 4:
            printf("%d adet pizza icin fatura %d'dir.\n", adet[i], 250*adet[i]);
            toplam_fiyat += 250*adet[i];
            break;

        default:
            printf("Boyle bir yemegimiz yok.\n");
            break;
        }
    }

    printf("Toplam borcunuz indirimle birlikte: %.2f", toplam_fiyat*indirim);
}