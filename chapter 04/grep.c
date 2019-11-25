#include <stdio.h>

#define MAXLINE 500
#define LEFT 0
#define RIGHT 1

int get_line(char line[], int max);
int strindex(char line[], char searchfor[], int direction);

int
main(int argc, char **argv){
  char line[MAXLINE];
  int len;
  if (argc == 0) {
    printf("Not enough argument. Pattern: a.out <string>");
    return 1;
  }
  char *searchfor = argv[1];
  
  while((len = get_line(line, MAXLINE)) > 0){
    int pos;
    if ((pos = strindex(line, searchfor, RIGHT)) >= 0)
      printf("%d: %s\n", pos, line);
  }
}

int
get_line(char line[], int max){
  int pos = 0;
  char c;
  while ((c = getchar()) != '\n' && c != EOF && pos < (max - 1)){
    line[pos++] = c;
  }
  line[pos] = '\0';
  return pos;
}

int strindex(char line[], char searchfor[], int direction){
  int last_success = -1;
  for (int pos = 0; line[pos] != '\0'; pos++){
    int j = 0;
    for (j = 0; searchfor[j] != '\0'; j++)
      if (line[pos + j] != searchfor[j])
	break;
    if (searchfor[j] == '\0') {
      if (direction == LEFT)
	return pos;
      else
	last_success = pos;
    }
  }
  return last_success;
}
