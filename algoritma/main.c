#include <stdio.h>

int main() {
    char rakam1, rakam2;

    //Karakter rakamlar� kullan�c�dan ald�m
    printf("Iki adet rakam karakteri giriniz (0-9): ");
    scanf(" %c %c", &rakam1, &rakam2);

    // Karakterlerin rakam olup olmad���n� kontrol ediyoruz
    if (rakam1 < '0' || rakam1 > '9' || rakam2 < '0' || rakam2 > '9') {
        printf("Hata: L�tfen sadece 0-9 aras� rakam karakterleri giriniz.\n");
        return 0;
    }

    // ASCII'den say�ya �eviriyoruz
    int sayi1 = rakam1 - '0';
    int sayi2 = rakam2 - '0';

    int toplam = sayi1 + sayi2;

    // Sonucun tek haneli olmas�n� kontrol ediyoruz
    if (toplam > 9) {
        printf("Hata: Toplam 9'dan buyuk olamaz. Sonuc = %d\n", toplam);
        return 1;
    }

    printf("Toplam: %c\n", toplam + '0');

    return 0;
}

