#include <stdio.h>
#include <string.h>
 
size_t count_words(char * str, const char * sep) {
  return (strtok(str, sep) ) ? 1 + count_words(NULL, sep) : 0;
}
 
int main(void) {
  char buf[BUFSIZ];

  const char sep[] = " \t\n.,!?;";    

  printf("String: ");

  if (fgets(buf, BUFSIZ, stdin) && *buf != '\n') {
    printf("In string %lu words\n", count_words(buf, sep));
  }
  return 0;
}
