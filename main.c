//
//  main.c
//  t
//
//  Created by nisa on 15.10.2025.
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
#include <stdio.h>
#include <stdlib.h>
    
    char ch1, ch2;
    int num1, num2;
    int sum;
    
    printf("=== 6-Bit Karakter Tabanlı Toplama Simülasyonu (ASCII Değerleri ile) ===\n");
    printf("İki rakam giriniz (örnek: '4' ve '7'):\n");

    // --- Birinci Rakam ---
    printf("Birinci rakam: ");
    scanf(" %c", &ch1);
    // Girilen karakterin ASCII değerini yazdır
    printf("-> Girdiğiniz karakter: '%c', ASCII değeri: %d\n", ch1, ch1);

    // --- İkinci Rakam ---
    printf("İkinci rakam: ");
    scanf(" %c", &ch2);
    // Girilen karakterin ASCII değerini yazdır
    printf("-> Girdiğiniz karakter: '%c', ASCII değeri: %d\n\n", ch2, ch2);

    // Karakterlerin '0' ile '9' arasında olup olmadığını ASCII değerlerine göre kontrol et
    if (ch1 < '0' || ch1 > '9' || ch2 < '0' || ch2 > '9') {
        printf("Hata: Geçersiz karakter girdiniz! (Sadece 0-9 arası olmalı)\n");
        return 1; // Programı hata koduyla sonlandır
   }


    // Karakterleri tamsayıya çevir (ASCII değerinden faydalanarak)
    num1 = ch1 - '0';
    num2 = ch2 - '0';
    sum = num1 + num2;

    printf("Hesaplama: %d + %d = %d\n", num1, num2, sum);

  
    if (sum > 9) {
        printf("Hata: Toplama sonucu 9'dan büyük! (Simülasyon kısıtlaması)\n");
    } else {
        // Sonucu hem tamsayı hem de karakter olarak göster
        char result_char = sum + '0'; // Tamsayı sonucu tekrar karaktere çevir
        printf("Toplama sonucu (tek haneli): %d\n", sum);
        printf("-> Sonuç karakteri: '%c', ASCII değeri: %d\n", result_char, result_char);
    }

    return 0;
}
    

