#include<stdio.h>

int main(){

    int arr[]={13,12,5,7,9,6};

    int n=6;

    int i,j,swap;

    for(i=0;i<n;i++){

        for(j=0;j<n-i-1;j++){//this is for comparing between two adjacent pairs

            if(arr[j]>arr[j+1]){

                swap =arr[j];

                arr[j]=arr[j+1];

                arr[j+1]=swap;

            }

         }

       }

    for(i=0;i<n;i++){/*print the sorted value

        like ascending order*/

        printf("%d\n",arr[i]);

    }

    return 0;

}
