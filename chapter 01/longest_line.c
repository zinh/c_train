#include <stdio.h>

#define MAXLINE 1000

void
copy(char src[], char dest[]){
  int i = 0;
  while ((dest[i] = src[i]) != '\0')
    i++;
}

int
get_line(char line[], int lim){
  int i, c;
  for (i = 0; ((c = getchar()) != EOF && c != '\n') && i < lim - 1; i++)
    line[i] = c;
  
  if (c == '\n') {
    line[i] = c;
    i++;
  }
  
  line[i] = '\0';
  return i;
}

int
main(){
  char line[MAXLINE];
  char longest[MAXLINE];
  int max = 0;
  int len;
  while ((len = get_line(line, MAXLINE)) > 0){
    if (len > max){
      max = len;
      copy(line, longest);
    }
  }
  if (max > 0)
    printf("%s", longest);
  return 0;
}
