int squeeze(char src[], char finder[]){
  for (int i = 0; finder[i] != '\0'; i++){
    remove_char(src, finder[i]);
  }
}

int remove_char(char src[], char c){
}
