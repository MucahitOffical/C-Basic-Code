
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pasw(char liste[], int longp, int num_long) {

    char alfabe[] = "abcdefghijklmnopqrstuvwxyz";
    char buyuk_alfabe[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char rakamlar[] = "0123456789";

    char chosen_item[longp];

    int repeater = 0;

    // Karakterleri oluştur
    while (repeater < longp) {

        if (repeater < num_long) {
            chosen_item[repeater] = rakamlar[rand() % 10];
        }

        else {
            int chosen = rand() % 2;

            if (chosen == 0) {
                chosen_item[repeater] = alfabe[rand() % 26];
            }
            else {
                chosen_item[repeater] = buyuk_alfabe[rand() % 26];
            }
        }

        repeater++;
    }

    int i = 0;

    while (i < longp) {

        int seckin = rand() % longp;
        int tekrar = 0;

        for (int j = 0; j < i; j++) {

            if (chosen_item[seckin] == liste[j]) {
                tekrar = 1;
                break;
            }
        }

        if (tekrar == 0) {
            liste[i] = chosen_item[seckin];
            i++;
        }
    }
}

int main() {

    srand(time(NULL));

    int length = 0;
    int num_length = 0;

    printf("Sifre kac karakterli olacak?\n");
    scanf("%d", &length);

    while (length < 5) {
        printf("Fazla kisa, lutfen daha uzun bir sifre secin.\n");
        scanf("%d", &length);
    }

    char password[length];

    printf("Kac tane sayi icersin?\n");
    scanf("%d", &num_length);

    while (num_length < 0 || num_length > length) {
        printf("Lutfen gecerli bir sayi girin.\n");
        scanf("%d", &num_length);
    }

    pasw(password, length, num_length);

    printf("\nSifreniz: ");

    for (int i = 0; i < length; i++) {
        printf("%c", password[i]);
    }

    printf("\n");

    return 0;
}