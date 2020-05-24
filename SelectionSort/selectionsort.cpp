#include <iostream>
using namespace std;


void swap(int *elem1, int *elem2) 
{ 
	int temp = *elem1; 
	*elem1 = *elem2; 
	*elem2 = temp; 
} 

void selectionSort(int arr[], int n) 
{ 
	int i, j, min_pos; 

	for (i = 0; i < n-1; i++) 
	{
		min_pos = i; 
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_pos]) 
			min_pos = j; 
		swap(&arr[min_pos], &arr[i]); 
	} 
} 

void displayContent(int arr[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int test_selectionSort() 
{ 
	int arr[] = {24, 5, 112, 2, 31, 1}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	cout << "Unsorted array: \n";
	displayContent(arr, n);
	selectionSort(arr, n); 
	cout << "Sorted array: \n"; 
	displayContent(arr, n); 
	return 0; 
} 
