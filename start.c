#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){

    char isim[50];
    char inuser[50] = "";
    int yas;

    while(strcmp(inuser, "cikis") != 0){
        char girdi[50] = "";

        printf("Merhaba, lutfen isim soyisim girin:\n");
        fgets(isim, sizeof(isim), stdin);
        isim[strcspn(isim, "\n")] = '\0';

        printf("Yasizi giriniz:\n");
        scanf("%d", &yas);

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);

        FILE *userlist = fopen("bilgi.txt","r");

        if (userlist == NULL){
            FILE *userlist = fopen("bilgi.txt","w");
            fprintf(userlist,"İsim: %s, yas: %d\n", isim, yas);
            fclose(userlist);
        }

        else if(getc(userlist) == EOF){
            fclose(userlist);
            FILE *userlist = fopen("bilgi.txt","w");
            fprintf(userlist,"İsim: %s, yas: %d\n", isim, yas);
            fclose(userlist);
        }

        else{
            fclose(userlist);
            FILE *userlist = fopen("bilgi.txt","a");
            fprintf(userlist,"İsim: %s, yas: %d\n", isim, yas);
            fclose(userlist);
        }

        printf("Kullanici eklemek ister misiniz ?\n");
        fgets(girdi, sizeof(girdi), stdin);
        girdi[strcspn(girdi, "\n")] = '\0';
        strcpy(inuser, girdi);
    }

        return 0;
}