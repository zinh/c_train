#include <stdio.h>

int power(int, int);

int
main(){
  printf("2^10 = %d\n", power(3, 10));
  return 0;
}

int
power(int base, int exp){
  if (exp == 0){
    return 1;
  }
  int result = base;
  while (exp > 0) {
    if ((exp % 2) == 0){
      result *= result;
      exp /= 2;
    } else {
      result = result + base;
      exp -= 1;
    }
  }
  return result;
}
