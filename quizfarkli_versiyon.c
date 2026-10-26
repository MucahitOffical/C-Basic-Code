#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
    
    int yolcu_sayi;

    printf("Yolcu sayisi giriniz: ");
    scanf("%d", &yolcu_sayi);
    
    if (yolcu_sayi<0){
        while (yolcu_sayi<0){
            printf("\nYolcu sayisi negatif olamaz.\n");
            scanf("%d", &yolcu_sayi);
        }
    }

    
    printf("Toplam otobus sayisi: %d \n", (int)ceil(yolcu_sayi/32));
    if(yolcu_sayi%32 == 0){
        printf("Son otobusteki dolu koltuk sayisi: 32\n");
        printf("Son otobusteki bos koltuk sayisi: 0\n");
    }
    else{
        printf("Son otobusteki dolu koltuk sayisi: %d\n", yolcu_sayi%32);
        printf("Son otobusteki bos koltuk sayisi: %d\n",32 - yolcu_sayi%32);
    }

    return 0;
}