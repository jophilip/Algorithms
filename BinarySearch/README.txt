Binary Search is one of the most common search algorithms, that we learn. It's complexity is O(log n)
The requirement for this search method is that the array should be sorted.

Pseudo Code:
function binary_search(A, n, T) is
    L := 0
    R := n − 1
    while L ≤ R do
        m := floor((L + R) / 2)
        if A[m] < T then
            L := m + 1
        else if A[m] > T then
            R := m - 1
        else:
            return m
    return unsuccessful
    
A - array to be searched
n - number of elements
T - element to be searched
