//Problem 1

#include<stdio.h>

void print_N(int n)

{

    if(n>1)

    print_N(n-1);

    printf("%d\n",n);

   

}

int main()

{

    int n;

    scanf("%d",&n);

    print_N(n);

    return 0;

}
