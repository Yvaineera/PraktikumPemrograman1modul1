#include <stdio.h>
#include <stdlib.h>

void main (){
    int a, b, x, y, sisa;

    printf("Variabel a bernilai ");
    scanf("%d", &a);
    printf("Variabel b bernilai ");
    scanf("%d", &b);
    printf("Variabel x bernilai ");
    scanf("%d", &x);
    printf("Variabel y bernilai ");
    scanf("%d", &y);
    sisa = (a%b) + (x%y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d",sisa);
}