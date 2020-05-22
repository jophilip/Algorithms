The idea behind Jump search is to minimise the number of elements to be searched, compared to linear search.
Here also we expect the input to be sorted array.

1: Set i=0 and m = √n.
2: Compare A[i] with item. If A[i] != item and A[i] < item, then jump to the next block. Also, do the following:
    Set i = m
    Increment m by √n
3: Repeat the step 2 till m < n-1
4: If A[i] > item, then move to the beginning of the current block and perform a linear search.
    Set x = i
    Compare A[x] with item. If A[x]== item, then print x as the valid location else set x++
    Repeat Step 4.1 and 4.2 till x < m
5: Exit
