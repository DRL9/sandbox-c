#include <stdio.h>
#include "./welcome.h"

void hello();

int main() {
  hello();
  hello();

  welcome();
  welcome();
  return 0;
}

void hello() {
  //
  printf("Hello, World!\n");
}
