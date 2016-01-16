# include <stdio.h>

int main(int argc, char *argv[]) {

  int list[] = {1, 2, 3};
  for (int i = 0; i < sizeof(list); i++) {
    printf("%d", list[i]);
  }
  printf("Hello World\n");
  return 0;
}
