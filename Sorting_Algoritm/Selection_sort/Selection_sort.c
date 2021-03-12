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
