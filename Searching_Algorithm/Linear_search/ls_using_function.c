// C code to linearly search x in arr[]. If x

// is present then return its location, otherwise

// return -1

#include <stdio.h>

 

int search(int arr[], int n, int x)

{

    int i;

    for (i = 0; i < n; i++)

        if (arr[i] == x){

            return i;/*if we want to print the target element which is present in i index 

   or if we want to print the exact target element then we have to write it like this return arr[i]    

        */

   

         }

    return -1;// return -1 means i is not present in that array

}

 

// Driver code

int main(void)

{

    int arr[] = { 2, 3, 4, 10, 40,50,60 };

    int x = 10;

    int n = 7;

   

    // Function call

   int result = search(arr, n, x);

 if(result == -1) {

printf("%d is not present in array\n",x);

        

   }

    else{

 printf("Element is present at index %d", result);

    }

    return 0;

}
