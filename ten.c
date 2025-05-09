#include <stdio.h>
#include <string.h>
  
#define SEP " \t\n"
 
int main(void) {

  char buf[BUFSIZ];
    
  printf("String: ");

  if (fgets(buf, BUFSIZ, stdin) && *buf != '\n') {

    char *longest = NULL;
    size_t max_len = 0;

    char temp[BUFSIZ];
    strncpy(temp, buf, BUFSIZ - 1);
    temp[BUFSIZ - 1] = '\0';

    char *token = strtok(temp, SEP);
    
    while (token) {
      size_t len = strlen(token);
      if (len > max_len) {
        max_len = len;
        longest = token;
      }
      token = strtok(NULL, SEP);
    }

    if (longest) {
      printf("Longest word: \"%s\" (%zu letters)\n", longest, max_len);
    } else {
        printf("No words found.\n");
    }

  }
  return 0;
}
