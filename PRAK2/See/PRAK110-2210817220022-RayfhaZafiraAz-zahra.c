#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main (){
    int alas = 5, tinggi = 12, A, B, C, K, L, P;
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab :\n");
        A = tinggi;
        printf("Sisi A = %d cm\n", A);
        C = alas;
        printf("Sisi C = %d cm\n", C);
        P = (A * A) + (C * C);
        B = sqrt(P);
        printf("Sisi B = %d cm\n", B);
        
        K = A + B + C;
        printf("Keliling = %d cm \n", K);
        L = 0.5 * A * C;
        printf("Luas = %d cm\n", L);
}