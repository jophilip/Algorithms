Insertion sort is a simple sorting method, where we insert the element at  the correct position, thereby sorting the array.
It is efficient only for small datasets, while for larger datasets advanced sorting algorithms are needed.
The complexity of this algorithm can be denoted as O(n^2).

Pseudocode:

i ← 1
while i < length(A)
    x ← A[i]
    j ← i - 1
    while j >= 0 and A[j] > x
        A[j+1] ← A[j]
        j ← j - 1
    end while
    A[j+1] ← x[3]
    i ← i + 1
end while
