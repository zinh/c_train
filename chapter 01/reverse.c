#include <stdio.h>
#include <string.h>

#define MAXLENGTH 500

int get_line(char line[], int lim){
  int i, c;
  for (i = 0; ((c = getchar()) != '\n' && i < lim - 1);i++)
    line[i] = c;
  line[i] = '\0';
  return i;
}

void reverse(char s[], int len){
  for (int i = 0; i < len / 2; i++){
    int tmp = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = tmp;
  }
  s[len] = '\0';
}

int
main(){
  char line[MAXLENGTH];
  int l = get_line(line, MAXLENGTH);
  
  reverse(line, l);
  
  printf("%s", line);
  return 0;
}
