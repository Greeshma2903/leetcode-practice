class Solution {
public:
    int scoreOfParentheses(string s) {
        // *The approach is based on one Discussion board*
        // We'll use Stack ofcourse (Stack of int)
        stack<int> parStack;
        int i, sum;
        
        // Traverse through the string
        for(i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
                parStack.push(-1);  // -1 marks '(' present in Stack
            // if ')'
            else   
            {   
                if(parStack.top() == -1 && !parStack.empty())
                {
                    parStack.pop();     // pop '('
                    parStack.push(1);   // first rule
                }
                else 
                {   // second and third rule
                    sum = 0;
                    // while the first '(' is not reached,
                    // add the numbers present in stack
                    while(!parStack.empty() && parStack.top() != -1)    
                    {
                        sum += parStack.top();
                        parStack.pop();
                    }
                    // pop '(' and push the (2 * sum)
                    parStack.pop();
                    parStack.push(2 * sum);
                }
            }
        }
        
        // while stack in not empty
        // calculate final score
        // return sum as score
        sum = 0;
        while(!parStack.empty() && parStack.top() != -1)
        {
            sum += parStack.top();
            parStack.pop();
        }
        
        return sum;
    }
};