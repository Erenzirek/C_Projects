#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int size = 5;

    // Bellekte 5 tane int boyutunda yer ayır ve sıfırla
    ptr = (int*)calloc(size, sizeof(int));

    if (ptr == NULL) {
        printf("Bellek tahsisi başarısız.\n");
        return 1;
    }

    // Bellekte ayrılan alanı kullan (otomatik olarak sıfırlandı)
    for (int i = 0; i < size; i++) {
        printf("%d ", ptr[i]); // Sıfır çıktısı alınmalı
    }

    // Bellekte ayrılan alanı serbest bırak
    free(ptr);

    return 0;
}