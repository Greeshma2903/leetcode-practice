class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char c;
        int i;
        for(i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                st.push(')');
            }
            else if(s[i] == '{')
            {
                st.push('}');
            }
            else if(s[i] == '[')
            {
                st.push(']');
            }
            else
            {
                // checking empty condition is important
                if(st.empty() || st.top() != s[i])
                    return false;
                st.pop();
            }
        }
        
        // return true; ❌
        
        // if stack is empty
        // means valid parenthesis
        
        // this also checks for cases like '[', where a single parenthesis can bypass the loop condition
        return (st.empty());
    }
    
};
