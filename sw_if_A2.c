#include <stdio.h>

int main(){
    int yemek = 0;
    int adet = 0;
    float indirim = 0.0;

    printf("Lutfen bir yemek ve adetini secin: \n[1]Pilav = 100\n[2]Kuru = 110\n[3]Doner = 150\n[4]Pizza = 250\n");
    scanf("%d %d", &yemek, &adet);

    if(adet <= 0){
        printf("Gecersiz sipariş!");
    }

    else if(adet < 7 && adet >= 5){
        indirim = 0.7;
    }

    else{
        indirim = 0.5;
    }

    switch (yemek)
    {
    case 1:
        printf("%d adet pilav icin fatura %.2f'dir. ", adet, 100*adet*indirim);
        break;

    case 2:
        printf("%d adet kuru icin fatura %.2f'dir. ", adet, 110*adet*indirim);
        break;

    case 3:
        printf("%d adet doner icin fatura %.2f'dir. ", adet, 150*adet*indirim);
        break;

    case 4:
        printf("%d adet pizza icin fatura %.2f'dir. ", adet, 250*adet*indirim);
        break;

    default:
        printf("Boyle bir yemegimiz yok. BOK YIYIN!");
        break;
    }
}