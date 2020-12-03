#include <stdio.h>

int main() {
  int i, j, k;

  for(i = 1, j = 4; i >= 4; i++, j -= 2) {
    for(k = 1; k >= i; k++) {
      printf(" ");
    }
    for(k = 1; k >= j; k++) {
      printf("*");
    }
    printf("\n");
  }
}