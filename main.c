#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("                 ======BASIT HESAP MAKINESI======");
    printf("\nIki adet sayi giriniz:");
    printf("\nNOT:Bu uygulama once girilen sayiya gore islem yapar..\n");
    int x,y;
    scanf("%d %d",&x,&y);
    printf("ISLEM SECİM EKRANI");
    printf("\nToplama icin >> 1");
    printf("\nCikarma icin >> 2");
    printf("\nCarpma icin >> 3");
    printf("\nBolme icin >> 4");
    printf("\nCikis icin >> 5");
    printf("\nLutfen bir secim yapiniz : ");
    int secim;
    scanf("%d",&secim);
    switch (secim) {
        case 1:
            printf("\n%d ve %d sayilarinin toplami == %d ",x,y,x+y);
        break;
        case 2:
            printf("\n%d ve %d sayilarinin farkı == %d ",x,y,x-y);
        break;
        case 3:
            printf("\n%d ve %d sayilarinin carpimi == %d ",x,y,x*y);
        break;
        case 4:
            printf("\n%d sayisinin %d sayisina orani == %d ",x,y,x/y);
        break;
        case 5:
            exit(0);
    }


}