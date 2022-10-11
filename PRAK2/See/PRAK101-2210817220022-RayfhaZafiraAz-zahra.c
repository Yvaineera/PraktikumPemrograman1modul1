#include <stdio.h>
#include <stdlib.h>

void main(){
    int x, y, z;
    int hasil;

    printf("Variabel x bernilai ");
    scanf("%d", &x);
    printf("Variabel y bernilai ");
    scanf("%d", &y);
    printf("Variabel z bernilai ");
    scanf("%d", &z);
    hasil = x + y + z;
    printf("Jumlah variabel tersebut adalah %d\n", hasil);
}