int contains(const char[], char);

int squeeze(char src[], char finder[]){
  for (int i = 0; src[i] != '\0'; i++) {
    if (contains(finder, src[i]))
      src[i] = '\0';
  }
  remove_deleted(src, i);
}

// Check if a string contains a character 
bool contains(const char src[], char c) {
  for (int i = 0; src[i] != '\0'; i++)
    if (src[i] == c)
      return true;
  return false;
}

void remove_deleted(char src[], int length) {
  for (int i; i < length; i++) {
    if (src[i] == '\0')
  }
}
