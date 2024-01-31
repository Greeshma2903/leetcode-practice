class Solution {
public:
    bool isValid(string s) {
        /* There shd be even number of elements. Plus, stack would only be empty
         * after all valid parenthesis are matched. Other cases indicate invalid
         * string.*/
        stack<char> st;
        // base cases
        if (s.size() == 1)
            return false;
        // loop through the string
        for (int i = 0; i < s.size(); i++) {
            // check for instances of opening brackets
            // if so, push the closing bracket version to the stack
            if (s[i] == '(')
                st.push(')');
            else if (s[i] == '{')
                st.push('}');
            else if (s[i] == '[')
                st.push(']');
            else {
                // if stack is empty too early or top of stack doesn't match
                // current element return invalid string
                if (st.empty() || st.top() != s[i]) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty(); // if stack is empty -> valid string
    }
};