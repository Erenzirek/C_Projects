#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


int main()
{
 
char board[3][3];
struct player
{
   char name[];
   int score;
};

for (int i = 0; i < 3; i++)
{
 for (int j = 0; j < 3; j++)
  {
    board[i][j] = '_';
  }
    printf("\n");
 }

for (int i = 0; i < 3; i++)
 {
  for (int j = 0; j < 3; j++)
  {
    printf("%c",board[i][j]);
  }
   printf("\n");
 }

 struct player player1;
 scanf("%c", &player1.name);
 printf("%c", player1.name);
  return 0;
}