### Brute Force:

1. Loop through all nums
2. For each loop: Run another from `j to n` loop such that `answer[ i ]` is product of all nums except when `i == j`

Complexity: `O(n^2)`

### Division Method

(Keep count of zeroes in array)
1. If more than 1 zero in array, then answer will be zero array.
2. If no zeros in array
	i. Find product of entire array
	ii. `answer[i] = prod / i`
3. If 1 zero in the array at index `m`:
	i. `answer[i] = 0` except when `index == m`
	ii. `answer[m]` = loop the array from `j to n` to find product of array, except when `j == m`

Complexity: O(n^2) for 3rd case

### Prefix & Suffix Product

1. `pre[i] = pre[i-1] * nums[i-1]`
2. `suf[i] = suf[i + 1] * nums[i + 1]`
3. `answer = pre * suf` - product of arrays

Complexity: O(n)
(Space Complexity is more)

### *Optimized Prefix & Sufix `todo`
