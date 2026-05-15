#include <stdlib.h>
#include <stdio.h>

int main() {
  for (int i = 000000; i < 1000000; i++) {
    int res = system("./bin3");
    if (res == 0) {
      printf("%d", res);
    }
  }
  int res = system("./bin3");
  return 0;
}
