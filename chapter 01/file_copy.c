#include <stdio.h>


void
getchar_v1(){
  int c;
  c = getchar();
  while (c != EOF){
    putchar(c);
    c = getchar();
  }
}

void
getchar_v2(){
  int c;
  while ((c = getchar()) != EOF)
    putchar(c);
}

void
char_count(){
  int nc;
  while(getchar() != EOF)
    ++nc;
  printf("%d\n", nc);
}

int
main(){
  char_count();
  return 0;
}
