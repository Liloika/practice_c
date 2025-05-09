#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100

int main() {
  char s[SIZE];
  char word[SIZE];
  int count = 0;

  printf("Enter string: ");
  fgets(s, SIZE, stdin);
  s[strcspn(s, "\n")] = '\0';

  printf("Enter word: ");
  fgets(word, SIZE, stdin);
  word[strcspn(word, "\n")] = '\0';

  char* token = strtok(s, " ");
  while (token != NULL) {
    if (strcmp(token, word) == 0) {
      count++;
    }
      token = strtok(NULL, " ");
  }

  printf("The word occurs %d times\n", count);
  return 0;
}
