int to_lower(const char c){
  if (c >= 'A' && c <= 'Z')
    return 'a' + c - 'A';
  return '\0';
}
