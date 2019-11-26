#define MAXVAL 100

int sp = 0;
double val[MAXVAL];

void push(float f){
  if (sp < MAXVAL - 1) {
    val[++sp] = f;
  }
}

float pop(){
  if (sp > 0) {
    return val[sp--];
  }
}
