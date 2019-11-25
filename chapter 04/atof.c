#include <stdio.h>

double pow(double, double);

int
ctoi(const char c) {
  if (c >= '0' && c <= '9')
    return c - '0';
  return -1;
}

double
atof(char s[]){
  double result;
  double direction = 10;
  int start_pos = 0;
  int sign = 1;
  int i;
  if (s[0] == '-'){
    start_pos++;
    sign = -1;
  } else if (s[0] == '+'){
    start_pos++;
  }

  for (i = start_pos; s[i] != '\0' && s[i] != '.' && s[i] != 'e'; i++) {
    result = result  * 10 + ctoi(s[i]);
  }

  if (s[i] == '.'){
    double p = 0.1;
    for (++i; s[i] != '\0' && s[i] != 'e'; i++){
      result = result + ctoi(s[i]) * p;
      p = p / 10;
    }
  }

  if (s[i] == 'e') {
    int exp = 0;
    int exp_sign = 1;
    start_pos = i + 1;
    if (s[i + 1] == '-'){
      start_pos = i + 2;
      exp_sign = -1;
    } else if (s[i + 1] == '+') {
      start_pos = i + 2;
    }
    for (int j = start_pos; s[j] != '\0'; j++) {
      exp = exp * 10 + ctoi(s[j]);
    }
    result = pow(result, exp_sign * exp);
  }

  return result;
}

int 
main(int argc, char **argv){
  if (argc == 1) {
    return 1;
  }
  double r = atof(argv[1]);
  printf("%f\n", r);
  return 0;
}
