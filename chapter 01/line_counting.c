#include <stdio.h>

int
main(){
  int line, c;
  line = 0;
  while((c = getchar()) != EOF){
    if (c == '\n')
      line++;
  }
  printf("%d\n", line);
}
