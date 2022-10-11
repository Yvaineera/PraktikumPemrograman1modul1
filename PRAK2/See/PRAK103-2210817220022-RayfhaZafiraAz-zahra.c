#include <stdio.h>
#include <stdlib.h>

void main() {
    float x, y, a, b, hasil;
    
    printf("Variabel a bernilai ");
    scanf("%f", &a);
    printf("Variabel b bernilai ");
    scanf("%f", &b);
    printf("Variabel x bernilai ");
    scanf("%f", &x);
    printf("Variabel y bernilai ");
    scanf("%f", &y);

    hasil = (a + b) * x / y;
    printf("Hasil dari a ditambah b dikali x dibagi y adalah %.2f\n", hasil);
}