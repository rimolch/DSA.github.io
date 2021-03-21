//Factorial using Recusrion

#include<stdio.h>

int fact(int n){

    if(n<=1){

        return 1;

    }

    else{

        return n*fact(n-1);//recursively calling

    }

}

int main(){

    int n,result;

    printf("Enter any number:");

    scanf("%d",&n);

    result = fact(n);

    printf("%d factorial is %d\n",n,result);

    return 0;

}
