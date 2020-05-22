#include <iostream>
using namespace std; 
  
void insertionSort(int arr[], int n)  
{  
    int i, j, token;  
    for (i = 1; i < n; i++) 
    {  
        token = arr[i];  
        j = i - 1;  
        while (j >= 0 && arr[j] > token) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = token;  
    }  
}  
  
void displayContent(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        cout << arr[i] << " ";  
    cout << endl; 
}  
  
/* Driver code */
int test_insertionSort()  
{  
    int arr[] = { 131, 23, 235, 5, 69, 1, 45, 2 }; 
    int n = sizeof(arr) / sizeof(arr[0]);  
    cout << "Before sorting" << endl;
    displayContent(arr,n);
    insertionSort(arr, n);  
    cout << "After sorting"  << endl;
    displayContent(arr, n);  
  
    return 0;  
} 
