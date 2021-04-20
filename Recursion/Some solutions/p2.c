//Problem 2
#include<stdio.h>
int fib(int n);
int main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=fib(i);
        printf("%d ",c);
    }
}
int fib(int n)
{
    if(n==0||n==1)
    {
        return 1;//base case
    }
    else
    {
    return fib(n-1)+fib(n-2);//recursive case
    }
}
