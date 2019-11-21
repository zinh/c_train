#include <stdio.h>

unsigned getbits(int, int, int);
unsigned setbits(int, int, int, int);

int
main() {
  printf("%d", getbits(199, 1, 4));
  return 0;
}

unsigned getbits(int x, int p, int n) {
  return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned setbits(int x, int p, int n, int y) {
  x >> (p + 1 - n)
}
