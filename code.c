#include <stdio.h>

int main(void) {
    //Tampilan Awal Untuk Mengetahui Operator Yng diinginkan
   long int jumlah, angka1, angka2, operator, keputusan;
    printf("----- Program Kalkulator Sederhana -----\n Masukan Operator Yang Anda Inginkan \n 1. Penjumlahan (1) \n 2. Pengurangan (2)\n 3. Pembagian (3)\n Operator Apa Yang Anda Inginkan : ");
    scanf("%i", &operator);
    printf("Operator yang anda pilih = %i\n", operator);
    printf("Masukan angka pertama : ");
    scanf("%i", &angka1);
    printf("Masukan angka kedua : ");
    scanf("%i", &angka2);
    //Menentukan operator
    if (operator == 1) {
        printf("%i + %i\n", angka1, angka2);
        jumlah = angka1 + angka2;
        printf("Jumlah = %i", jumlah);
        printf("\n");
    }  else if (operator == 2){
        printf("%i -%i\n", angka1, angka2);
        jumlah = angka1 - angka2;
        printf("Jumlah = %i", jumlah);
        printf("\n");
    } else if (operator == 3){
        printf("%i :%i\n", angka1, angka2);
        jumlah = angka1/angka2;
        printf("Jumlah = %i", jumlah);
        printf("\n");
    }
    printf("Terimakasih telah menggunakan program kalkulator sederhana ini ^^");
    return 0;
}
