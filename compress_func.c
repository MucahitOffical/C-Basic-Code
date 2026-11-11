
#include <stdio.h>
#include <string.h>

void compress(char metin[], char *comp) {
    char harf;
    int sayac = 0;
    int index = 0;

    for (int i = 0; i < strlen(metin); i++) {
        harf = metin[i];

        if (metin[i] == metin[i + 1]) {
            sayac += 1;
        }
        else {
            comp[index] = harf;
            index++;

            index += sprintf(&comp[index], "%d", sayac + 1);

            sayac = 0;
        }
    }

    comp[index] = '\0';
}

int main() {
    char metin[200];

    printf("Metni giriniz:\n");
    scanf("%199s", metin);

    char comp_metin[200];

    compress(metin, comp_metin);

    printf("Compressed Metin: %s\n", comp_metin);

    return 0;
}