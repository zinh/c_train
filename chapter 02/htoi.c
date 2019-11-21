#include <stdio.h>

int htoi(const char[]);

int
main(int argc, char** argv){
  if (argc == 2){
    printf("%s = %d\n", argv[1], htoi(argv[1]));
  }
  return 0;
}

int
htoi(const char s[]){
  int r = 0;
  int start = 0;
  char c;
  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')){
    start = 2;
  }

  for(int i = start; (c = s[i]) != '\0'; i++) {
    if (c >= '0' && c <= '9') {
      r = r * 16 + (c - '0');
    } else if (c >= 'A' && c <= 'F') {
      r = r * 16 + 10 + (c - 'A');
    } else if (c >= 'a' && c <= 'f') {
      r = r * 16 + 10 + (c - 'a');
    }
  }
  return r;
}
