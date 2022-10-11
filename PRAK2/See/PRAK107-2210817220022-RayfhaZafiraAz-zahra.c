#include <stdio.h>
#include <stdlib.h>

void main (){
    int s1 = 4, s2= 7, s3 = 5, k, hpm, biaya;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", s1, s2, s3);
    k = s1 + s2 + s3;
    printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
    printf("Harga tanah Per Meter adalah ");
    scanf("%d", &hpm);
    printf("Jawaban :\n");
    biaya = hpm * k;
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", biaya);
}