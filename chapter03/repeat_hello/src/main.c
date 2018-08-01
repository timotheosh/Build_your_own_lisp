/*
 * Repeat "Hello World! 5 times.
 */

#include <stdio.h>

void repeat_with_for(char *str) {
  for(int i = 0; i < 5; i++) {
    puts(str);
  }
}

void repeat_with_while(char *str) {
  int i = 0;
  while (i < 5) {
    puts(str);
    i++;
  }
}

void repeat_n_times(int i, char* str) {
  for(int k = 0; k < i; k++)
    puts(str);
}

int main(int argc, char **argv) {
  char *greeting = "Hello World!";
  
  puts("Repeat with for:");
  repeat_with_for(greeting);
  
  puts("Repeat with while:");
  repeat_with_while(greeting);
  
  puts("Repeat n times, n = 3");
  repeat_n_times(3, greeting);
  
  return 0;
}
