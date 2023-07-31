#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>


int main()
{
  int guess;
  int number_of_guesses;
  int answer;
  int MAX = 7;
  int MIN = 6;
  int counter = 0;
  
  srand(time(NULL));
  
  answer = (rand() % MIN) + MAX; //  0 < X < 5 || >> ||  7 < X < 12

  printf("%d\n",answer);

 
  for (int i = 0; i < 5; i++)
  {
    printf("Enter any guess: \n");
    scanf("%d",&guess);

    if (guess == answer)
    {
      i=5;
      printf("Congratulations!! You are succeded..\n" );
    }
    else if(guess < answer)
    {
      printf("your guess smaller than answer!!\n");
    }
    else{
      printf("Your guess bigger than answer!!\n");
    }
  }
  
  printf("Game over!!");



return 0;
}