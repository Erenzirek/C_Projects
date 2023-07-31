#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_WRONG_GUESSES 6

void game_init(char guessedLetters[], int wordLength) {
    printf("Tahmininiz: ");
    for (int i = 0; i < wordLength; i++) {
        printf("%c ", guessedLetters[i]);
    }
    printf("\n");
}

void game_play(char guessedLetters[], char word[], int wordLength) {
    char guess;
    int wrongGuessCount = 0;
    int isGameOver = 0;
    char guessedWords[100][20]; // Kullanıcının girdiği tahminleri saklayacak dizi
    int guessedWordsCount = 0;
    int correctGuess = 0;

    while (!isGameOver) {
        printf("Bir harf tahmin edin: ");
        scanf(" %c", &guess);

        // Aynı kelime daha önce tahmin edildiyse uyarı ver
        int isGuessedBefore = 0;
        for (int i = 0; i < guessedWordsCount; i++) {
            if (strcmp(guessedWords[i], &guess) == 0) {
                printf("Bu harfi daha once tahmin ettiniz!\n");
                isGuessedBefore = 1;
                break;
            }
        }

        if (isGuessedBefore) {
            continue; // Tahmini tekrar al
        }

        strcpy(guessedWords[guessedWordsCount], &guess);
        guessedWordsCount++;

        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess) {
                guessedLetters[i] = guess;
                correctGuess = 1;
            }
        }

        if (!correctGuess) {
            wrongGuessCount++;
            printf("Yanlis tahmin! Kalan hak: %d\n", MAX_WRONG_GUESSES - wrongGuessCount);
        }

       game_init(guessedLetters, wordLength);

        if (wrongGuessCount >= MAX_WRONG_GUESSES) {
            printf("Kaybettiniz! Dogru kelime: %s\n", word);
            isGameOver = 1;
        }

        if (strcmp(word, guessedLetters) == 0) {
            printf("Tebrikler! Dogru kelimeyi buldunuz: %s\n", word);
            isGameOver = 1;
        }
    }
}

int main() {
    char word[] = "kelem";
    int wordLength = strlen(word);    // length of the string 
    char guessedLetters[wordLength];  // input for guessed letters

    for (int i = 0; i < wordLength; i++) {
        guessedLetters[i] = '_';
    }

    //game_init(guessedLetters, wordLength);
    game_play(guessedLetters, word, wordLength);

    printf("Game had finished !!");
    while (1)
    {
        /* code */
    }
    


    return 0;
}