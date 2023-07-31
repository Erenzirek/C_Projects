#include <stdio.h>

int main() {
    FILE *pF = fopen("C:\\Users\\erenz\\Masaüstü\\test.txt", "w");
/*
   if (pF == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }
*/
   
    fprintf(pF, "Spongebob Squarepants");

    fclose(pF);

    return 0;
}