# Union of two arrays
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two arrays <strong style="user-select: auto;">a[]</strong>&nbsp;and <strong style="user-select: auto;">b[]</strong>&nbsp;of size <strong style="user-select: auto;">n</strong>&nbsp;and <strong style="user-select: auto;">m</strong> respectively. The task is to find union between these two arrays. </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>5 3
1 2 3 4 5
1 2 3
<strong style="user-select: auto;">Output: 
</strong>5<strong style="user-select: auto;">
Explanation: 
</strong>1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>6 2 
85 25 1 32 54 6
85 2 
<strong style="user-select: auto;">Output: 
</strong>7<strong style="user-select: auto;">
Explanation: 
</strong>85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So count is 7.</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Complete <strong style="user-select: auto;">doUnion </strong>funciton that takes<strong style="user-select: auto;"> a, n, b, m as parameters and returns</strong> the count of union elements of the&nbsp;two arrays. The <strong style="user-select: auto;">printing </strong>is done by the <strong style="user-select: auto;">driver </strong>code.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ n, m&nbsp;≤ 10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
0 ≤ a[i], b[i] &lt;&nbsp;10<sup style="user-select: auto;">5</sup></span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity </strong>: O((n+m)log(n+m))<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxilliary Space</strong> : O(n+m)</span></p>
 <p style="user-select: auto;"></p>
            </div>