#include <stdio.h>

int main() {
    char rakam1, rakam2;

    //Karakter rakamlarý kullanýcýdan aldým
    printf("Iki adet rakam karakteri giriniz (0-9): ");
    scanf(" %c %c", &rakam1, &rakam2);

    // Karakterlerin rakam olup olmadýðýný kontrol ediyoruz
    if (rakam1 < '0' || rakam1 > '9' || rakam2 < '0' || rakam2 > '9') {
        printf("Hata: Lütfen sadece 0-9 arasý rakam karakterleri giriniz.\n");
        return 0;
    }

    // ASCII'den sayýya çeviriyoruz
    int sayi1 = rakam1 - '0';
    int sayi2 = rakam2 - '0';

    int toplam = sayi1 + sayi2;

    // Sonucun tek haneli olmasýný kontrol ediyoruz
    if (toplam > 9) {
        printf("Hata: Toplam 9'dan buyuk olamaz. Sonuc = %d\n", toplam);
        return 1;
    }

    printf("Toplam: %c\n", toplam + '0');

    return 0;
}

