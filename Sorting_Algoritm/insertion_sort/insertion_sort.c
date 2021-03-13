#include<stdio.h>

int main(){

    int A[]={12,11,13,5,6};

    int n =5;

    int i,j,value;

    for(i=1;i<n;i++){

        value = A[i];

        j = i-1;

      while(j>=0&&A[j]>value){

            A[j+1]=A[j];

            j=j-1;

        }

        A[j+1]=value;

    }

    for(i=0;i<n;i++){

        printf("%d\n",A[i]);

    }

    return 0;

}
