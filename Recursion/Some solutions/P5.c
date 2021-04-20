//Problem 5
// print the GCD value 
#include<stdio.h>

int GCD(int n1,int n2)
{
    int r;
    r = (n1%n2);
    if(r==0)
    {
       return n2;
    }
   return  GCD(n2,r);
}
int main()
{
    int n,p;
    int n1,n2;
    scanf("%d",&n);
    scanf("%d %d",&n1,&n2);
    p = GCD(n1,n2);
    printf("%d",p);
    return 0;
}
