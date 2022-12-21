#include<stdio.h>

int main(){
    int boruto[3] = {85, 90, 86};
    int sarada[3] = {84, 90, 89};
    int i;

    printf("Nilai Boruto :\n");
    printf("Ujian Progdas ke-1: %d\n", boruto[0]);
    printf("Ujian Progdas ke-2: %d\n", boruto[1]);
    printf("Ujian Progdas ke-3: %d\n\n", boruto[2]);
    printf("Nilai Sarada :\n");
    printf("Ujian Progdas ke-1: %d\n", sarada[0]);
    printf("Ujian Progdas ke-2: %d\n", sarada[1]);
    printf("Ujian Progdas ke-3: %d\n\n", sarada[2]);

printf("Rekap perbandingan nilai boruto dan sarada:\n");
for (i = 0; i < 3; i++) {
printf("hasilnya : ");
    if (boruto[i] > sarada[i]) {
        printf("1 \n");
    } else {
        printf("0 \n");
    }
}
     printf("\nProgram by Rafidhiya Bagus Farizki\n");
     printf("NIM 202110370311424\n");
return 0;
}
