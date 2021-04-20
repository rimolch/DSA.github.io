//Problem 2
//print the fibonacci series using recursion 
//output will be like this if n =10
// 1 1 2 3 5 8 13 21 34 55
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
