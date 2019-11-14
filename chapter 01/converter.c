#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int celcius_to_fahr();
int fahr_to_celcius();
int reverse_fahr_to_celcius();

int
main(){
  reverse_fahr_to_celcius();
}

int
fahr_to_celcius() {
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Farenheit Celcius convert table\n");
  while (fahr <= upper) {
    celcius = 5 * (fahr - 32) / 9;
    printf("%3.0f%6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }
  return 0;
}

int
celcius_to_fahr(){
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;
  while (celsius <= upper){
    fahr = celsius * 1.8 + 32;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius += step;
  }
  return 0;
}

int
reverse_fahr_to_celcius(){
  float celcius;
  for(int fahr; fahr <= UPPER; fahr += STEP) {
    celcius = 5.0 * (fahr - 32) / 9;
    printf("%d\t%6.1f\n", fahr, celcius);
  }
  return 0;
}
