#include <stdio.h>

void reverseSentence(); 

int main()

 {

     reverseSentence(); 

      return 0; 

 } 

void reverseSentence() 

 { 

    char c;

    scanf("%c", &c); 

    if (c !='\n') //if the variable isn't new line character, recursive function calls again.

    { 

        reverseSentence(); 

        printf("%c",c);//when the variable reaches of it's new line character,then it will be printed the last value and as we were go on.

    } 

