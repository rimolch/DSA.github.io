#include<stdio.h>

void mergesort(int a[],int i, int j);

void merge(int a[],int i1,int j1,int i2,int j2);

int main(){

    int n,i;

    int a[30];

    printf("Enter no of elements:"); 

      scanf("%d",&n);    

     	printf("Enter array elements:\n"); 	 	
    for(i=0;i<n;i++){ 	        	
        scanf("%d",&a[i]); 

        } 

 	mergesort(a,0,n-1); 

    	printf("\nSorted array is :"); 

    	for(i=0;i<n;i++){ 		

        printf("%d ",a[i]); 

        		} 	

    return 0; 

}

void mergesort(int a[],int i,int j){

    int mid;

    if(i<j){

        mid =i+(j-i)/2;

        mergesort(a,i,mid);

        mergesort(a,mid+1,j);

        merge(a,i,mid,mid+1,j);

    }

}

void merge(int a[],int i1,int j1,int i2,int j2){

    int i,j,k;

    int temp[50];

    k = 0;

    i = i1;

    j = i2;

    while(i<=j1&&j<=j2){

        if(a[i]<a[j]){

            temp[k++]=a[i++];

        }

        else{

            temp[k++]=a[j++];

        }

    }

    while(i<=j1){

        temp[k++]=a[i++];

    }

    while(j<=j2)

        temp[k++]=a[j++];

    

    for(i=i1,k=0;i<=j2;i++,k++)

        a[i]=temp[k];

}

//Another method using l variable in void merge 

#include<stdio.h>
void mergesort(int a[],int i, int j);
void merge(int a[],int i1,int j1,int i2,int j2);
int main(){
    int n,i;
    int a[30];
    printf("Enter no of elements:"); 
      scanf("%d",&n);    
     	printf("Enter array elements:\n"); 	 	     for(i=0;i<n;i++){ 	
        	scanf("%d",&a[i]); 
        } 
 	mergesort(a,0,n-1); 
    	printf("\nSorted array is :"); 
    	for(i=0;i<n;i++){ 		
        printf("%d ",a[i]); 
        		} 	
    return 0; 
}
void mergesort(int a[],int i,int j){
    int mid;
    if(i<j){
        mid =i+(j-i)/2;
        mergesort(a,i,mid);
        mergesort(a,mid+1,j);
        merge(a,i,mid,mid+1,j);
    }
}

void merge(int a[],int i1,int j1,int i2,int j2){
    int i,j,k,l;
    int temp[50];
    k = 0;
    i = i1;
    j = i2;
    while(i<=j1&&j<=j2){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=j1){
        temp[k++]=a[i++];
    }
    while(j<=j2)
        temp[k++]=a[j++];
    
    for(i=i1,l=0;i<=j2;i++,l++)
        a[i]=temp[l];
}




