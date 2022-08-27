#include<stdio.h>
char toLower(char ch){
    return ch | (1<<5);
}
char toUpper(char ch){
    return ch & ( ~(1<<5) );
}
char toToggle(char ch){
    return ch ^ (1<<5);
}
int main(){
  char ch;
  scanf("%c",&ch);
  printf("%c",toLower(ch));
  printf("%c",toUpper(ch));
  printf("%c",toToogle(ch));
  return 0;
}
