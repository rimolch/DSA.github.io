//Problem 4
//Print the counting value 
#include<stdio.h>
int Value_count(int n)
{
   static int count =0;
    if(n!=0)
    {
        count++;
        Value_count(n/10);
    }
    return count;
}
int main()
{
    int n,count;
    scanf("%d",&n);
    count = Value_count(n);
    printf("%d",count);
    return 0;
}

