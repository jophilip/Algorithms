#include <iostream>
#include <math.h>
#include "jumpsearch.h"
using namespace std;

int jumpSearch(int arr[], int n, int value)
{
    int i = 0;
    int m = sqrt(n); //initializing block size= √(n)

    while(arr[m] <= value && m < n) { 
          // the control will continue to jump the blocks 
        i = m;  // shift the block
        m += sqrt(n);
        if(m > n - 1)  // if m exceeds the array size
             return -1; 
    }

    for(int x = i; x<m; x++) { //linear search in current block
          if(arr[x] == value)
             return x; //position of element being searched 
    }
    return -1;
}

int testJumpSearch()
{
    int found = -1;
    int a [] = {1,2,3,4,5,6,7,8,9,10};
    found = jumpSearch(a, 10, 8);
    if(found == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << found << "\n";
    found = jumpSearch(a, 10, 16);
    if(found == -1)
        cout << "Element not found\n";
    else
        cout << "Element found at index " << found << "\n";
    return 0;
}
