#include <stdio.h>

int
main(){
  char *line = NULL;
  size_t linecap = 0;
  ssize_t len;
  len = getline(&line, &linecap, stdin);
  printf("len = %lu, linecap = %lu, text = %s", len, linecap, line);
  return 0;
}
