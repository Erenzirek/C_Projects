#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int size = 5;

    // Bellekte 5 tane int boyutunda yer ayır
    ptr = (int*)malloc(size * sizeof(int));

    if (ptr == NULL) {
        printf("Bellek tahsisi başarısız.\n");
        return 1;
    }

    // Bellekte ayrılan alanı kullan
    for (int i = 0; i < size; i++) {
        ptr[i] = i + 1;
    }

    // Bellekte ayrılan alanı serbest bırak
    free(ptr);

    return 0;
}