#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

typedef struct 
{
  char name[25];
  char password[12];
  int id;
} User;


int main()
{
  /*
  struct Player player1;
  struct Player player2;

  strcpy(player1.name,"Bro");
  player1.score = 4;

  strcpy(player2.name, "Eren");
  player2.score = 54;

  printf("%s\n",player1.name);
  printf("%s",  player2.name);
  */

  User user1 = {"Bro", "password123", 123456789};
  User user2 = {"Bruh","password123", 655453664};

  printf("%s\n", user1.id);
  printf("%s\n", user1.name);
  printf("%s\n", user1.password);
  printf("\n");
  printf("%s\n", user2.id);
  printf("%s\n", user2.name);
  printf("%s\n", user2.password);

  return 0;
}