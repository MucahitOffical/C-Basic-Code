#include <stdio.h>

int main(){
    int yemek = 0;
    int adet = 0;
    int cesit_sayi = 0;
    int toplam_fiyat = 0;
    int toplam_adet = 0;
    float indirim = 0;

    printf("Kac cesit yemek alacaksiniz: ");
    scanf("%d", &cesit_sayi);

    for(int i = 0; i<cesit_sayi; i++){
        printf("\nLutfen bir yemek ve adetini secin: \n[1]Pilav = 100\n[2]Kuru = 110\n[3]Doner = 150\n[4]Pizza = 250\n");
        scanf("%d %d", &yemek, &adet);

        switch (yemek)
        {
            case 1:
                printf("%d adet pilav icin fatura %d'dir.\n", adet, 100*adet);
                toplam_adet += adet;
                toplam_fiyat += 100*adet;
                break;

            case 2:
                printf("%d adet kuru icin fatura %d'dir.\n", adet, 110*adet);
                toplam_adet += adet;
                toplam_fiyat += 110*adet;
                break;

            case 3:
                printf("%d adet doner icin fatura %d'dir.\n", adet, 150*adet);
                toplam_adet += adet;
                toplam_fiyat += 150*adet;
                break;

            case 4:
                printf("%d adet pizza icin fatura %d'dir.\n", adet, 250*adet);
                toplam_adet += adet;
                toplam_fiyat += 250*adet;
                break;

            default:
                printf("Boyle bir yemegimiz yok.\n");
                break;
        }
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

    printf("Toplam borcunuz indirimle birlikte: %.2f", toplam_fiyat*indirim);

    return 0;
}