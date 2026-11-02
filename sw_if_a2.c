#include <stdio.h>

int main(){
    int islem = 0;
    float tutar = 0.0;
    float bakiye = 0.0;
    
    do
    {
        printf("Hangi islemi yapmak istersiniz ?\n[1] Para yatir.\n[2] Para cek.\n");
        scanf("%d", &islem);

        switch (islem)
        {
        case 1:
            printf("Ne kadar tutar yatirmak istersiniz ?\n");
            scanf("%f", &tutar);
            bakiye += tutar;
            printf("İsleminiz gerceklestirilmistir. Bakiyeniz: %.2f", bakiye);
            break;
        
        case 2:
            printf("Ne kadar para cekmek istersiniz ?\n");
            scanf("%f", &tutar);

            if (bakiye-tutar <0){
                printf("Maalesef bakiyeniz yeterli degil. Bakiye: %.2f\n", bakiye);
            }

            else{
                bakiye -= tutar;
                printf("Isleminiz gerçeklestirilmistir. Bakiyeniz: %.2f\n", bakiye);
            }
            break;

        default:
            printf("Boyle bir islem tanimli degil!\n");
            break;
        }

    } while ((islem != 1) && (islem !=2));

    return 0;
}