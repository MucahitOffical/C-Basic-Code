#include <stdio.h>


int kaprekar(int sayi){

    int first = 0, second = 0, third = 0, yedek = 0; 
    int biggest = 0, smallest = 0, netice = 0;

    first = sayi %10;
    sayi = sayi/10;
    second = sayi%10;
    third = sayi/10;

    if(first>second){
        if (third>first){
            yedek = first;
            first = second;
            second = yedek;
        }

        else{
            if (third>second){
                yedek = first;
                first = second;
                second = third;
                third = yedek;
            }

            else{
                yedek = first;
                first = third;
                third = yedek;
            }
        }
    }

    else{
        if(second>third){
            if(third > first){
                yedek = second;
                second = third;
                third = yedek;
            }

            else{
                yedek = first;
                first = third;
                third = second;
                second = yedek;
            }
        }
    }

    biggest = 100*third + 10*second + first;
    smallest = 100*first + 10*second + third;
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

    while (netice != 495)
    {
        netice = kaprekar(netice);
        sayac++;

        if(sayac>6){
            printf("Yanlis sayi!");
            return 0;
        }
    }

    printf("Netice: %d", netice);

}
