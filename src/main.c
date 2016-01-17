#include <stdio.h>

int add(int a, int b) {
  return a + b;
}

int main(int argc, char *argv[]) {
  int list[] = {1, 2, 3};

  for (int i = 0; i < sizeof(list) / sizeof(int); i++) {
    printf("%d\n", list[i]);
  }
  int c = add(1, 1);

  printf("sum is %d\n", c);
  printf("Hello World\n");

  struct {
    int num;
    char cr[10];
  } s;

  s.num = 1;
  printf("struct s num: %d\n", s.num);

  return 0;
}
