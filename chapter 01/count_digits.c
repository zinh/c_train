#include <stdio.h>

int
main(){
  int wp, other, c;
  int ndigits[10];
  
  wp = other = 0;
  for(int i = 0; i < 10; i++)
    ndigits[i] = 0;

  while ((c = getchar()) != EOF){
    if (c >= '0' && c <= '9')
      ndigits[c - '0']++;
    else if (c == ' ' || c == '\t' || c == '\n')
      wp++;
    else
      other++;
  }
  printf("whitespaces: %d, other characters: %d\n", wp, other);
  for (int i = 0; i < 10; i++){
    printf(" %d", ndigits[i]);
  }
}
