#include <stdio.h>

#define LINE_LIMIT 500

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

int
main(int argc, char **argv){
  char line[LINE_LIMIT];
  int len;
  while ((len = read_line(line, LINE_LIMIT))){
    if (len < 80)
      printf("%s", line);
  }
  return 0;
}
