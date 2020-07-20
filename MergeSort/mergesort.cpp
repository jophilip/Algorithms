#include<iostream>
using namespace std;


void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
   int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first and second arrays
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}

int test_mergesort() {
   int arr[10] = {3,1,2,6,4,9,0,8,5,7};     //create an array with given number of elements
   cout << "Array before Sorting: ";
   for(int i = 0; i<10; i++)
      cout << arr[i] << " ";
   cout << endl;
   mergeSort(arr, 0, 9);     //(n-1) for last index
   cout << "Array after Sorting: ";
   for(int i = 0; i<10; i++)
      cout << arr[i] << " ";
   cout << endl;
   return 0;
}
