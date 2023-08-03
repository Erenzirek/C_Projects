#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_WRONG_GUESSES 6


int main() {
char words[][20] = {
        "apple",
        "banana",
        "cherry",
        "grape",
        "orange"
};

    // Yanlış tahminlerde gösterilecek asmada resim aşamaları
const char* hangmanStages[] = {
    "",
    "   O\n",
    "   O\n   |\n",
    "   O\n  /|\n",
    "   O\n  /|\\\n",
    "   O\n  /|\\\n  / \n",
    "   O\n  /|\\\n  / \\\n"
};


int wordIndex;
int wrongGuessCount = 0;
bool found = false; // Harf bulunup bulunmadığını kontrol etmek için
char c;
char guessedLetters[26] = {0};
int guessCount = 0;
    
    printf("Select a word (0-4): ");
    scanf("%d", &wordIndex);

    if (wordIndex < 0 || wordIndex >= sizeof(words) / sizeof(words[0])) {
        printf("Invalid word index.\n");
        return 1;
    }

    char selectedWord[20];
    strcpy(selectedWord, words[wordIndex]);

    for (int i = 0; i < strlen(selectedWord); i++) {
        selectedWord[i] = '_';
    }

    printf("Enter character: \n");

while (wrongGuessCount < MAX_WRONG_GUESSES) {
    char guess;
    getchar(); // Önceki newline karakterini tüket
    printf("Enter character: ");
    scanf("%c", &guess);
    
    for (size_t i = 0; i < guessCount; i++)
    {
        if (guessedLetters[i] == guess)
        {
            printf("you entered this character before\n");
        }
    }

    if (guessedLetters[guessCount] != guess) {
            guessedLetters[guessCount] = guess;
            printf("Kaydedilen: %c\n", guessedLetters[guessCount]);
            guessCount++;
            guessedLetters[guessCount] = 0;
        }

    
    
    found = false; // Her tahmin öncesi found'u sıfırla

    for (int i = 0; i < strlen(selectedWord); i++) {
        if (words[wordIndex][i] == guess)
        {
            selectedWord[i] = guess;
            found = true;
        }
    }

    if (!found)
    {
        wrongGuessCount++;
        printf("Wrong guess! %d incorrect guesses remaining.\n", MAX_WRONG_GUESSES - wrongGuessCount);
        printf("%s",hangmanStages[wrongGuessCount]);
    }

    if (strcmp(selectedWord, words[wordIndex]) == 0)
    {
        printf("Congratulations!\n");
        break;
    }

    printf("%s\n", selectedWord);
}

if(wrongGuessCount == MAX_WRONG_GUESSES)
{
    printf("Game is over !!\n");
}
    return 0;
}




