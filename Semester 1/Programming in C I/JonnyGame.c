/* This is my first C program */
#include <time.h>
#include <string.h>
#include <stdio.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * 500;

    // Stroing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds);
}

int main () {

  char n[200] = "";
  int i;

  printf("Welcome to Jonny's Game; to start the game please type your name.\n");

  fgets(n,200,stdin);

  for (i = 0; i < 3; i++) {
    // delay of one second
    delay(1);
    printf(".\n");
  }
  printf("Hello %s", n);
  for (i = 0; i < 3; i++) {
    // delay of one second
    delay(1);
    printf(".\n");
  }
  printf("Nice to meet you!\n");

  printf("What character would you like to play as?\n");



  fgets(n,200,stdin);
  while((strcmp(n, "Warrior") != 0) || (strcmp(n, "Wizard") != 0) || (strcmp(n, "Priest") != 0)){
    printf("That's not a valid character, please pick a:\n");
    printf("- Warrior\n");
    printf("- Wizard\n");
    printf("- Priest\n");
    scanf("%s", n);
  }
  for (i = 0; i < 3; i++) {
    // delay of one second
    delay(1);
    printf(".\n");
  }
  printf("A %s, awesome!", n);
  return 0;
}
