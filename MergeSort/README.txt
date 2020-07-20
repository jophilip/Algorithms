This is an implementation of the merge sort using C++ language
Merge Sort is a Divide and Conquer algorithm.
It divides input array in two halves, sorts the halves by calling itself and then merges the two sorted halves. 
Algorithm:
MergeSort(arr,left,right):
     1. Find the middle point to divide the array into two halves:  
             middle = (left+right)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, left, middle)
     3. Call mergeSort for second half:
             Call mergeSort(arr, middle +1, right)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, left, middle, right)
