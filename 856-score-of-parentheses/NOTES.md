☕ Reference for explanation of approach: (*took the first appraoch because of ease of understanding. Great question and awesome appraoch*)
https://leetcode.com/problems/score-of-parentheses/discuss/1856520/Java-Easy-to-understand-or-Intuition-and-solution-or-O(n)-greater-O(1)

⌛ Complexity of first appraoch:
`TC : O(n) SC: O(n)`
___
### Raw Explanation:

When we come across an opening brace, we push it to stack.
When we come accross a closing brace, there are three possible cases:
1. Either the top of stack is `(`, hence an individual pair. This means, score is one.
2. Either the top of stack is a number, which means there are two posiblities:
    -  `()()` adjacent pairs. We push 1 for each such pair, and further we add the scores of each pair at the end.
    -  `(())` nested pairs. Hence we multiple the depth of the nesting with 2, and push to stack.
___
**Example**

Input: `(()()((())))`
```
Traverse: **(**()()((())))
Stack: (

Traverse: (**(**)()((())))
Stack: ( ( 

Traverse: ((**)**()((())))
Stack: ( 1

Traverse: (()**(**)((())))
Stack: ( 1 (

Traverse : (()(**)**((())))
Stack: ( 1 1

Traverse : (()()**(**(())))
Stack: ( 1 1 (

Traverse : (()()(**(**())))
Stack: ( 1 1 ( (

Traverse : (()()((**(**))))
Stack: ( 1 1 ( ( ( 

Traverse : (()()(((**)**)))
Stack: ( 1 1 ( ( 1

Traverse : (()()((()**)**))
Stack: ( 1 1 ( 2*1

Traverse : (()()((())**)**)
Stack: ( 1 1 2*2
Stack: ( 1 1 4

Traverse : (()()((()))**)**
Stack: (1+1+4)*2
Stack: 6
```
