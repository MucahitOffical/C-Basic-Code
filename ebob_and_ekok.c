#include <stdio.h>
#include <stdlib.h>

int ebob_finder(int sayi, int num){
    int bigger = 0;
    int smaller = 0;
    int ebob = 1;

    if (sayi == num) return num;

    else if (sayi > num){
        bigger = sayi;
        smaller = num;
    }

    else{
        bigger = num;
        smaller = sayi;
    }

    if(bigger % smaller == 0){
        return smaller;
    }

    else{
        for (int i = 2; i < smaller; i++){
            if(bigger % i == 0 && smaller % i == 0){
                ebob = i;
            }
        }
    }

    return ebob;
}

int ekok_finder(int sayi, int num, int ebob){
    int min_sayi_carp = sayi/ebob;
    int min_num_carp = num/ebob;

    return min_num_carp*min_sayi_carp*ebob;
}


int main(){

    int sayib = 0;
    int sayik = 0;

    while (sayib <= 0 || sayik <= 0){
        printf("Iki tane pozitif tam sayi girin: \n");
        scanf("%d %d", &sayib, &sayik);
    }

    int ebob = ebob_finder(sayib, sayik);
    int ekok = ekok_finder(sayib, sayik, ebob);

    printf("%d ve %d sayisinin ebobu = %d ve ekoku = %d'dir.",sayib, sayik, ebob, ekok);
}