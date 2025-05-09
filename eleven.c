#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  
int main()
{
  char *string = NULL;
  size_t bufsize = 0;

  printf("Enter a String: ");
  ssize_t len = getline(&string, &bufsize, stdin);

  if (len > 0 && string[len - 1] == '\n') {
    string[len - 1] = '\0';
  }

  int str = strlen(string);
  int num = 1;  
  for(int i = 0; i < str / 2; i++)
    if(string[i] != string[str - 1 - i]) {
      num = 0;
      break;
    }

  if (num) {
    printf("The Given String Is A Palindrome\n");
  } else {
      printf("The Given String Is Not A Palindrome\n");
    }

  free(string); 
  return 0;
}


