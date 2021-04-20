//Problem 3
//print the array element
#include <stdio.h>

void ArrayElement(int arr1[], int first_value, int n);
 
int main()
{
    int arr1[100];
    int n, i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
	      scanf("%d",&arr1[i]);
	    }
    printf("\n");
    ArrayElement(arr1, 0, n);//call the function ArrayElement
    return 0;
}

void ArrayElement(int arr1[], int first_value, int n)
{
    if(first_value>=n)
    {
        return; 
    }
    //Prints the current array element
    printf("%d\n", arr1[first_value]);
    /* Recursively call ArrayElement to print next element in the array */
   ArrayElement(arr1, first_value+1, n);//calling the function  ArrayElement itself
}
