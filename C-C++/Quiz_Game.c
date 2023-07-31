#include <stdio.h>
#include <stdbool.h>

// Sorular ve cevapları burada tanımlanır
const char* questions[] = {
    "Soru 1: Which language is writing?\n A) C++\nB) Python\nC) Java\nD) C\n",
    "Soru 2: How many bytes does the int type occupy in C language?, 'int' \n A) 2\nB) 4\nC) 8\nD) Değişken\n",
};

const char* correctAnswers[] = {
    "D", // Question 1 answer
    "B", // Question 2 answer
    
};

int main() {
    const int NUM_QUESTIONS = sizeof(questions) / sizeof(questions[0]);
    int score = 0;

    printf("Quiz Oyununa Hos Geldiniz!\n\n");

    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        printf("%s", questions[i]);
        char userAnswer;
        scanf(" %c", &userAnswer);

        if (userAnswer == correctAnswers[i][0]) {
            printf("True!\n\n");
            score++;
        } else {
            printf("Wrong! True answer is: %c\n\n", correctAnswers[i][0]);
        }
    }

    printf("Game is over! Total point: %d / %d\n", score, NUM_QUESTIONS);

    return 0;
}