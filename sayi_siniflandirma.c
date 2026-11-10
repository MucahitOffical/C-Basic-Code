#include <stdio.h>

int main(){
    int adet = 0;
    int sayi = 0;
    int pozcift = 0;
    int negtek = 0;
    int toplam = 0;

    printf("Kac sayi gireceksin:");
    scanf("%d", &adet);

    for (int i = 0; i<adet; i++){
        printf("\nSayi giriniz: ");
        scanf("%d", &sayi);
        
        toplam += sayi;

        if(sayi<0 && sayi % 2 != 1){
            negtek += 1;
        }
        
        if(sayi>0 && sayi % 2 == 0){
            pozcift += 1;
        }
    }

    printf("\nSayilarin toplami: %d.\n", toplam);
    printf("Pozitif ve cift sayilarin adeti: %d.\n", pozcift);
    printf("Negatif ve tek sayilarin adeti: %d.\n", negtek);
}