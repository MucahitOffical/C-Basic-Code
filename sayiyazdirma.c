#include <stdio.h>
#include <stdlib.h> // malloc, realloc ve free fonksiyonları için şarttır
#include <stdbool.h>

int main() {
    int eleman_sayisi;
    int mainsayi;
    int inpnum;

    printf("Kac adet sayi gireceksiniz? ");
    scanf("%d", &eleman_sayisi);

    // Bellekte dinamik olarak yer ayırma
    int *sayilar = (int *)malloc(eleman_sayisi * sizeof(int));

    // Bellek ayrılamadıysa kontrol etme
    if (sayilar == NULL) {
        printf("Yetersiz bellek!\n");
        return 1;
    }

    // Kullanıcıdan sayıları alma
    for (int i = 0; i < eleman_sayisi; i++){
        printf("%d. sayiyi girin: ", i + 1);
        scanf("%d", &inpnum);

        int tekrar;

        do {
            tekrar = 0;
            
            for(int j = 0; j < i; j++){
                if( sayilar[j] == inpnum){
                    tekrar = 1;
                    break;
                }
            }

            if(tekrar){
                printf("Bu sayi daha önce girilmis baska bir sayi deneyin:\n");
                scanf("%d", &inpnum);
            }
        } while (tekrar);

        sayilar[i] = inpnum;
    }

    printf("Hangi sayinin modu diye kontrol edeceksiniz ?\n");
    scanf("%d", &mainsayi);

    for (int i = 0; i < eleman_sayisi; i++) {
        if (sayilar[i] == 0) {
            printf("Sifira bolme kontrolu yapilamaz.\n");
        }

        else if (mainsayi % sayilar[i] == 0) {
            printf("%d sayisi %d sayisina tam bolunuyor.\n",
            mainsayi, sayilar[i]);
        }
        
        else {
            printf("%d sayisi %d sayisina tam bolunmuyor.\n",
            mainsayi, sayilar[i]);
        }
    }
    printf("\n");

    // Dinamik ayrılan belleği mutlaka serbest bırakın
    free(sayilar);

    return 0;
}