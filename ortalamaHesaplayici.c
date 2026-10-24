#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int ders_sayisi;
    printf("Kac tane dersiniz var ?\n");
    scanf("%d", &ders_sayisi);

    if(ders_sayisi<=0){
        while(ders_sayisi < 0){
            printf("Ders sayisi negatif olamaz!\n");
            printf("Kac tane dersiniz var ?\n");
            scanf("%d", &ders_sayisi);

            if (ders_sayisi == 0){
                printf("Ders yoksa ortalama da yok!\n");
                exit(1);
            }
        }
    }

    char dersler[ders_sayisi][50];

    char user_inp[50];
    int userinp_note;
    int user_note[ders_sayisi];
    int top = 0;

    for(int i = 0; i<ders_sayisi; i++){
        printf("Dersinizin adini giriniz: ");
        scanf("%s", &user_inp);
        strcpy(dersler[i],user_inp);
    }

    for (int j = 0; j<ders_sayisi;j++){
        printf("%s dersindeki notunu gir: \n", dersler[j]);
        scanf("%d", &userinp_note);

        if (userinp_note<0){
            while (userinp_note<0)
            {
                printf("Ders notunuz negatif olamaz!\n");
                printf("%s dersindeki notunu gir: \n", dersler[j]);
                scanf("%d", &userinp_note);   
            }
        }
        user_note[j] = userinp_note;
        top += userinp_note;
    }

    float ortalama = (float)top / ders_sayisi;

    for (int z = 0; z<ders_sayisi; z++){
        printf("%s: %d\n", dersler[z], user_note[z]);
    }
    printf("Ortalama: %.3f", ortalama);

    return 0;
}