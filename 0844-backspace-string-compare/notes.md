### Approach 1: Using stacks
```cpp
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
```

### Approach 2: Keep a count of '#' and do a backward string comparison

```
for each string s and t:
	count = 0
	start backward iteration:
		if `str[i]` equal to '#', then
			count++
		else
			if count > 0, then count--
			else if count == 0, then `newStr.push_back(str[i])`

// Compare the new strings generated from above
if newStr1 = newStr2, then true
else false
```
			

