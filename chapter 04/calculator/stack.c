#include <stdio.h>
#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(float f){
  if (sp < MAXVAL) {
    val[sp++] = f;
  } else {
    printf("Error: Stack overflown\n");
  }
}

float pop(){
  if (sp > 0) {
    return val[--sp];
  } else {
    printf("Error: Empty stack\n");
    return 0.0;
  }
}
