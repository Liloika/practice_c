#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
  
  char str[101];
  int upper_counter = 0;
  int lower_counter = 0;

  printf("Enter the line: ");
  scanf("%s", str);

  for(int i = 0; i < str[i] != '\0'; i++) {
   
    if(str[i] >= 'a' && str[i] <= 'z') {
      lower_counter++;
    } else if(str[i] >= 'A' && str[i] <= 'Z') {
        upper_counter++;
      }
  }

  printf("Number of lowercase letters per line: %d\n", lower_counter);
  printf("Number of uppercase letters per line: %d\n", upper_counter);

  return 0;
}
