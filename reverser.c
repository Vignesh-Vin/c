#include<stdio.h>
int main() {
  char word[10];
  int length;
  printf("Enter a word\n");
  scanf("%s", word);
  
//    Calculating the length of the String
  char newWord[10];
  for(int i = 0; word[i] != '\0'; i++) {
      length = i;
  }
  
//    Shifting characters around
  for(int j = 0; j <= length; j++) {
      newWord[j] = word[length - j];
  }
  newWord[length + 1] = '\0';
  printf("\nYour word in reverse: %s", newWord);
}
