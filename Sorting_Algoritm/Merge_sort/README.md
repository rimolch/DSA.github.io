# implementation of merge_sort 
MergeSort(arr[], l,  r)

If r > l

     1. Find the middle point to divide the array into two halves:  

             middle m = l+ (r-l)/2

     2. Call mergeSort for first half:   

             Call mergeSort(arr, l, m)

     3. Call mergeSort for second half:

             Call mergeSort(arr, m+1, r)

     4. Merge the two halves sorted in step 2 and 3:

             Call merge(arr, l, m, r)
 
 # Diagram of merge_sort 
 ![Merge-Sort-Tutorial](https://user-images.githubusercontent.com/67545874/111894444-f51a3500-8a34-11eb-83b2-56eb97c8f150.png)
