#include<stdio.h>

int binary_search(int A[],int n,int x){

    int left,right,mid;

    left = 0;

    right = n-1;

    mid =0;

    while(left<=right){

        mid =left+ (right-left)/2;/*this is used only for the highest value of left and right such as 2^31-1(i.e 2147483647)... 

 left abong right er value jkn high hobe tkn integer overflow korbhe so that's why we have to use it*///or we can write it like this (left+right)/2;

       if(x ==A[mid]){

            return A[mid];

        }

        else if(x<A[mid]){

            right = mid-1;

        }

        else{

            left = mid +1;

        }

    }

  return -1;//means not present in that array

}

int main(){

    int A[]={10,20,30,40,50,60,70,80,90};

    int n=9;

    int x =80;

    int result = binary_search(A,n,x);

    if(result ==-1){

        printf("%d is not present in that array\n",x);

    }

    else{

        printf("%d is present in that array \n",result);

    }

    return 0;

}
