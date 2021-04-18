#include<stdio.h>
int f_calls =0;
int fact(int n)
{
    f_calls = f_calls+1;
    if(n==0||n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("factorial of %d is %d\n",n,fact(n));
    printf("Number of function calls:%d\n",f_calls);
    return 0;
}
