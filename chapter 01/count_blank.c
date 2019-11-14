#include <stdio.h>

#define SPACE 0
#define NONSPACE 1

int
count_blank(){
  int count, c;
  count = 0;
  while((c = getchar()) != EOF){
    if (c == '\t' || c == '\n' || c == ' ')
      count++;
  }
  return count;
}

void
copy_io(){
  int state, c;
  while((c = getchar()) != EOF){
    if (c == ' ' && state == NONSPACE) {
      state = SPACE;
      putchar(c);
    } else if (c != ' '){
      state = NONSPACE;
      putchar(c);
    }
  }
}

void
replace_tab(){
  int state, c;
  while((c = getchar()) != EOF){
    if (c == '\t')
      printf("\\t");
    else if (c == '\b')
      printf("\\b");
    else if (c == '\\')
      printf("\\");
    else
      putchar(c);
  }
}

int
main(){
  replace_tab();
  return 0;
}
