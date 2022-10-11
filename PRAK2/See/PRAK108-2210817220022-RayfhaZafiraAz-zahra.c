#include <stdio.h>
#include <stdlib.h>

void main (){
    float mt = 5, jt = 14, kl, jr;

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", mt);
    printf("Jarak tempuh Pak Dengklek =  %.f Kilometer\n\n", jt);
    printf("Jawaban :\n");
    kl = jt / mt;
    jr = (kl * 7) / (2 * 22);
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f\n", jr);
}