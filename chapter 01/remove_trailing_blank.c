#include <stdio.h>

#define MAX_LENGTH 500

int
read_line(char line[], int lim){
  int i, c;
  for(i = 0; ((c = getchar()) != EOF && c != '\n' && i < lim - 1); i++)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i;
}

void
trim_line(char s[], int length){
  int start, end_line;
  int i;
  for (start = 0; start < length && (s[start] == ' ' || s[start] == '\t'); start++)
    ;
  for (end_line = length - 1; end_line >= 0 && (end_line == ' ' || end_line == '\t'); end_line--)
    ;
  for(i = start; i <= end_line; i++){
    s[i - start] = s[i];
  }
  s[i] = '\0';
}

int
main(){
  char line[MAX_LENGTH];
  int len;
  while ((len = read_line(line, MAX_LENGTH))){
    trim_line(line, len);
    printf("Trimed: %s\n", line);
  }
}
