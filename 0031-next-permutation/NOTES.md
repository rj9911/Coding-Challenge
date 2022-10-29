Algo
a[i] < a[i+1]   idx1=1      // To get the next perm.
a[idx2] > a[idx1] idx2=2  // Intution
swap(a[idx1],a[idx2])    //
reverse(idx1+1, last)          // To get the next perm
​
1 3 5 4 2   ->  1 4 2 3 5
​
5
3  4
1       2
​
​
​
​
​
​
O(n)