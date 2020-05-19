#include <iostream>
#include "binarySearch.h"

using namespace std;


int iterative_binarySearch(int A[], int n, int T)
{
    int index = -1;
    int left = 0;
    int right = n-1;
    int m = 0;
    while(left <=right){
        m = (left + right)/2;
        if(A[m] == T){
            index = m;
            break;
        }
        else if(A[m] > T){
            right = m-1;
        }
        else{
            left = m+1;
        }
    }
    return index;
}

int recursive_binarySearch(int A[], int left, int right, int T )
{
    if(left <= right){
        if(A[((left + right)/2)] == T){
            return ((left + right)/2);
        }
        else if(A[((left + right)/2)] > T){
            return recursive_binarySearch( A, left, ((left + right)/2) - 1, T );
        }
        else{
            return recursive_binarySearch( A, ((left + right)/2) + 1, right, T );
        }
    }
    return -1;
}

int test_binarySearch()
{
    int found = -1;
    int a [] = {1,2,3,4,5,6,7,8,9,10};
    found = iterative_binarySearch(a, 10, 8);
    if(found == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << found << "\n";
    found = recursive_binarySearch(a, 0, 9, 5);
    if(found == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << found << "\n";
    return 0;
    
}
