#include <stdio.h>
#include <string.h>

#define MAX 1000

char stack[MAX];
int top = -1;

void push(char c) {
  if (top < MAX - 1) {
    stack[++top] = c;
  }
}

char pop() {
  if (top >= 0) {
    return stack[top--];
  }
  return '\0';
}

char peek() {
  if (top >= 0) {
    return stack[top];
  }
  return '\0';
}

int is_matching(char open, char close) {
  return (open == '(' && close == ')') ||
         (open == '[' && close == ']') ||
         (open == '{' && close == '}');
}

int check_brackets(const char *str) {
  for (int i = 0; str[i]; i++) {
    char c = str[i];
    if (c == '(' || c == '[' || c == '{') {
      push(c);
    } else if (c == ')' || c == ']' || c == '}') {
        char open = pop();
        if (!is_matching(open, c)) {
          return 0; 
        }
      }
  }
  return top == -1;
}

int main() {
  char input[MAX];
  printf("Enter a string with parentheses: ");
  fgets(input, MAX, stdin);

  if (check_brackets(input)) {
    printf("The brackets are correct\n");
  } else {
      printf("The brackets are not correct\n");
    }

    return 0;
}
