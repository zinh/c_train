#include <stdio.h>

#define MAX_ARRAY_SIZE 20
#define IN 0
#define OUT 1

void histogram_word_length(){
  int lengths[MAX_ARRAY_SIZE];
  int c;
  int state = OUT;
  int current_length = 0;
  for (int i = 0; i < MAX_ARRAY_SIZE; i++){
    lengths[i] = 0;
  }
  
  while ((c = getchar()) != EOF){
    if (c == ' ' && state == IN){
      lengths[current_length] += 1;
      current_length = 0;
      state = OUT;
    } else if (c != ' '){
      current_length += 1;
      state = IN;
    }
  }
  
  if (current_length != 0)
    lengths[current_length] += 1;
  
  for (int i = 0; i < MAX_ARRAY_SIZE; i++){
    if (lengths[i] == 0)
      continue;
    printf("length %d(%d) ", i, lengths[i]);
    for (int j = 0; j < lengths[i]; j++)
      putchar('|');
    putchar('\n');
  }
}


int
main(){
  histogram_word_length();
  return 0;
}
