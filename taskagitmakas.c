
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char ogeler[3][50] = {"Tas", "Kagit", "Makas"};
    int uschose;

    srand(time(NULL));
    int secim = rand() % 3;

    printf("1) Tas\n2) Kagit\n3) Makas\nHangisi? ");
    scanf("%d", &uschose);

    if (uschose < 1 || uschose > 3) {
        printf("Gecersiz secim!");
        return 1;
    }

    char *user_oge = ogeler[uschose - 1];
    char *maksec = ogeler[secim];

    printf("Senin secimin: %s\n", user_oge);
    printf("Makinenin secimi: %s\n", maksec);

    if (strcmp(maksec, user_oge) == 0) {
        printf("Oyun berabere.");
    }
    else if (
        (strcmp(user_oge, "Tas") == 0 &&
         strcmp(maksec, "Makas") == 0) ||

        (strcmp(user_oge, "Kagit") == 0 &&
         strcmp(maksec, "Tas") == 0) ||

        (strcmp(user_oge, "Makas") == 0 &&
         strcmp(maksec, "Kagit") == 0)
    ) {
        printf("Tebrikler, kazandiniz!");
    }
    else {
        printf("Kaybettiniz!");
    }

    return 0;
}
