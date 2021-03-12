#include<stdio.h>
void selection_sort(int A[],int n){
    int i,j,index_min,temp;
    for(i=0;i<n-1;i++){
        index_min= i;
       
     for(j=i+1;j<n;j++){
            if(A[j]<A[index_min]){
            index_min = j;
            
          }
      }
        if(index_min!=i){
            temp = A[i];
            A[i]=A[index_min];
            A[index_min]=temp;
            
        }
       
   }
    for(i=0;i<n;i++){
            printf("%d\n",A[i]);
        }
}

int main(void){
     int A[]={64,30,12,22,11,34,78,100,56};
    int n = 9;
    printf("Sorted array: \n"); 
    selection_sort(A, n);
    return 0; 
}

//using function 
#include<stdio.h>

void bubble_sort(int arr[],int n){

    int i,j,swap;

    for(i=0;i<n;i++){

        for(j=0;j<n-i-1;j++){

            if(arr[j]>arr[j+1]){

                swap =arr[j];

                arr[j]=arr[j+1];

                arr[j+1]=swap;

            }

         }

       }

    for(i=0;i<n;i++){

        printf("%d\n",arr[i]);

        printf("\n");

    }

  }

int main(){

    int arr[]={13,12,5,7,9,6};

    int n=6; 
    
    // call function
    bubble_sort(arr,n);

    return 0;

}
