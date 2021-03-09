#include <stdio.h>
//fungsi tambah
float tambah(float x, float y) {
    return (x + y);
}
//fungsi kurang
float kurang(float x, float y) {
    return (x - y);
}
//fungsi kali
float kali(float x, float y) {
    return (x * y);
}
//fungsi bagi
float bagi(float x, float y) {
    return (x / y);
}
//fungsi integral untuk y = x^2 
float integral(float p, float q) {
    float hasil = 0; 
    float a;
    float b;
	
   /* for loop execution */
   for( a = p; a < q; a = a + 0.01 ){
      b = a*a ; // fungsi merupakan y =x^2
      hasil = hasil + (b*0.01);
   }
   return hasil;
}

int main(){
    //program menerima input A, B, dan operator lalu mengeluarkan A (operator) B
    float angkaA;            // deklarasi variabel angka a
    float angkaB;            // deklarasi variabel angka b
    char operator;         // deklarasi variabel operator


    printf("Masukkan Angka A = ");
    scanf("%f", &angkaA);  // menerima input angka dan menyimpan dalam variabel angka B
    printf("Masukkan Angka B = ");
    scanf("%f", &angkaB); // menerima input angka dan menyimpan dalam variabel angka B
    printf("Masukkan Operator ('+','-'.'*','/','i' (untuk integral y = x^2) : ");
    scanf("%s", &operator);
    
    if (operator == '+') {
        printf("%.2f",tambah(angkaA , angkaB));
    }
        
    if (operator == '-') {
        printf("%.2f",kurang(angkaA , angkaB));
    }
        
    if (operator == '/') {
        printf("%.2f",bagi(angkaA , angkaB));
    }
        
    if (operator == '*') {
        printf("%.2f",kali(angkaA , angkaB));
    }
        
    if (operator == 'i') {
        printf("%.2f",integral(angkaA , angkaB));
    }
    return 0;
}