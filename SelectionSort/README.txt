Selection sort is a simple sorting technique.
The algorithm sorts the elements in-place. While doing so, it divides the space into two sublist.
During each iteration the unsorted space moves right by one position, thereby growing the sorted sublist.
The algorithm proceeds by finding the smallest element in the unsorted sublist, 
swapping it with the leftmost unsorted element, and moving the sublist boundaries one element to the right.

Algorithm:
 1 − Set MIN to location 0
 2 − Search the minimum element in the list
 3 − Swap with value at location MIN
 4 − Increment MIN to point to next element
 5 − Repeat until list is sorted
