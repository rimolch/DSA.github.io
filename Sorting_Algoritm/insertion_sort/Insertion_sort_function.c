#include<stdio.h>

void print_array(int A[],int n){

    int i;

    for(i=0;i<n;i++){

        printf("%d\n",A[i]);

    }

}

void insertion_sort(int A[],int n){

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

}

int main(){

    int A[]={12,11,13,5,6};

    int n = 5;

    insertion_sort(A,n);

    print_array(A,n);

    printf("\n");

}
