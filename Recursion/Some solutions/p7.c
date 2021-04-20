// Problem 7 
// print string is palindrom or not 

#include <stdio.h>
#include <string.h>
 
void checkPalindrome(char [], int i);
 
int main()
{
    char wordPal[25];
    scanf("%s", wordPal);
    checkPalindrome(wordPal, 0);//call the function for checking Palindorem
 
    return 0;
}
 
void checkPalindrome(char wordPal[], int i)
{
    int len = strlen(wordPal)-(i+1);
    if (wordPal[i] == wordPal[len])
    {
       if (i + 1 == len || i== len)
        {
            printf("Yes");
        
            return;
        }
        checkPalindrome(wordPal, i + 1);//calling the function itself recursively
    }
    else
    {
        printf("No");
    }
}
