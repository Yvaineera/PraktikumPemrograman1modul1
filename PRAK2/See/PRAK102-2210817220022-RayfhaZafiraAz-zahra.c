#include <stdio.h>
#include <stdlib.h>

void main(){
    float a, b, c;
    float hasil;

    printf("Variabel a bernilai ");
    scanf("%f", &a);
    printf("Variabel b bernilai ");
    scanf("%f", &b);
    printf("Variabel c bernilai ");
    scanf("%f", &c);
    hasil = (a * b) / c;
    printf("Hasil dari a dikali b dibagi c adalah %f\n", hasil);
}