#include <stdio.h>
#include <stdlib.h>

void main (){
    int jp, jh, jpl;

    printf("Jumlah pasukan yang dibawa Yu Zhong = ");
    scanf("%d", &jp);
    printf("Jumlah Pahlawan  = ");
    scanf("%d", &jh);
    jpl = jp / jh;
    printf("Jumlah pasukan yang harus dikalahkan oleh setiap pahlawan Dragon Altar = %d pasukan", jpl);
}