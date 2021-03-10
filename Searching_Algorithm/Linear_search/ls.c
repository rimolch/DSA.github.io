#include<stdio.h>

int linear_search(int A[],int n,int x){

    int i;

    for(i = 0;i<n;i++){

        if(A[i]==x){

            return i;//found in that array

        }

    }

    

    return -1;//Not found in that array

}

int main(){

    int ara[]={5,6,7,8,9,10,11,19,57,98,100};

    int length = 11;

    int target = 98;

  

    int number;

   number = linear_search(ara,length,target);

    printf("The target number is located at that array in %d index",number);

}
