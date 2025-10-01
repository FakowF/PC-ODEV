#include <stdio.h>
#include <stdlib.h>


int sayi;

int main() {

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi > 0) {
        printf("Sayiniz Pozitif\n");
    }

    else if (sayi < 0) {
        printf("Sayiniz Negatif\n");
    }

    else {
        printf("Sayiniz Sifir\n");
    }
    return 0;
}

