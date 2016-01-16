#include <stdio.h>

int main(int argc, char *argv[]) {
  int list[] = {1, 2, 3};
  for (int i = 0; i < sizeof(list) / sizeof(int); i++) {
    printf("%d\n", list[i]);
  }
  printf("Hello World\n");
  return 0;
}