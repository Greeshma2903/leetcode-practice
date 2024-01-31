class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // Approach 1: O(n) space complexity
        stack<char> str1, str2;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                // if #, pop element if stack isn't empty; continues to remain
                // empty or else
                if (!str1.empty())
                    str1.pop();
            } else {
                // push other elements
                str1.push(s[i]);
            }
        }
        for (int i = 0; i < t.size(); i++) {
            if (t[i] == '#') {
                // if #, pop element if stack isn't empty; continues to remain
                // empty or else
                if (!str2.empty())
                    str2.pop();
            } else {
                // push other elements
                str2.push(t[i]);
            }
        }

        // compare is contain same value
        return str1 == str2;
    }
};