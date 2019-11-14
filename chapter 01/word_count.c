x#include <stdio.h>

#define IN 0
#define OUT 1

int
word_count(){
  int state, c, count;
  state = OUT;
  count = 0;
  while ((c = getchar()) != EOF){
    if(c == ' ') {
      state = OUT;
    } else if (c != ' ' && state == OUT) {
      count++;
      state = IN;
    }
  }
  return count;
}

void
print_words(){
  char c;
  while((c = getchar()) != EOF){
    if (c == ' '){
      putchar('\n');
    } else {
      putchar(c);
    }
  }
}

int
main(){
  print_words();
  return 0;
}
