int any(const char s[], const char substr[]){
  for (int i = 0; substr[i] != '\0'; i++){
    if ((pos = find_char(s, c)) > 0)
      return pos;
  }
  return -1;
}

int find_char(const char s[], const char c){
  for (int i = 0; s[i] != '\0'; i++)
    if (s[i] == c)
      return i;
  return -1;
}
