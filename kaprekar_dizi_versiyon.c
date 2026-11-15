#include <stdio.h>

int kaprekar(int sayi){

    int bigger = 0, medium = 0, smaller = 0;
    int biggest = 0, smallest = 0, netice = 0;

    int sayi_liste[4];

    sayi_liste[0] = sayi %10;
    sayi = sayi/10;
    sayi_liste[1] = sayi%10;
    sayi_liste[2] = sayi/10;

    for (int i = 0; i<3; i++){

        if (sayi_liste[i]>bigger)
        {
            smaller = medium;
            medium = bigger;
            bigger = sayi_liste[i];
        }

        else if(sayi_liste[i]>medium){
            smaller = medium;
            medium = sayi_liste[i];
        }

        else{
            smaller = sayi_liste[i];
        }
    }

    biggest = 100*bigger + 10*medium + smaller;
    smallest = 100*smaller + 10*medium + bigger;
    netice = biggest - smallest;

    printf("Biggest: %d - smallest = %d = %d\n", biggest, smallest, netice);

    return netice;
}

int main(){
    
    int sayi = 0;
    int sayac = 0;

    while (sayi<100 || sayi>999)
    {
        printf("Dogru sayi giriniz: \n");
        scanf("%d", &sayi);
    }

    int netice = kaprekar(sayi);

    while(netice != 495){
        netice = kaprekar(netice);
        sayac++;

        if(sayac>6){
            printf("Yanlis sayi!");
            return 0;
        }
    }

    printf("Netice: %d\n", netice);

    return 0;
}