#include <stdio.h>
#include <stdlib.h>

void main (){
    int a, b, diskon1 = 13, diskon2 = 21, h1, h2;
    char d = '%';
    printf("Harga Sepatu A adalah ");
    scanf("%d", &a);
    printf("Harga Sepatu B adalah ");
    scanf("%d", &b);
    printf("Sepatu A mendapat diskon 13%c ", d, &diskon1);
    h1 = a - (a * diskon1 / 100);
    printf("sehingga harganya menjadi %d\n", h1);
    printf("Sepatu B mendapat diskon 21%c ", d, &diskon2);
    h2 = b - (b * diskon2 / 100);
    printf("sehingga harganya menjadi %d\n", h2);
}