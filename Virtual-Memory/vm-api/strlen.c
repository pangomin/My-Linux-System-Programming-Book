#include <stdio.h>
#include <string.h>

int main() {
  char str0[] = "Hi";
  char str1[] = "Hi";
  size_t length = strlen(str1) - 1;

  printf("str0 - 1: %lu\n", strlen(str0) - 1);
  printf("str1: %d | length - 1: %zu\n",
          strlen(str1) -1, length - 1);

  return 0;
}
