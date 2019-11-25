#include <stdio.h>

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

  for (i = start_pos; s[i] != '\0' && s[i] != '.'; i++) {
    result = result  * 10 + ctoi(s[i]);
  }

  if (s[i] == '.'){
    double p = 0.1;
    for (int j = i + 1; s[j] != '\0'; j++){
      result = result + ctoi(s[j]) * p;
      p = p / 10;
    }
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
