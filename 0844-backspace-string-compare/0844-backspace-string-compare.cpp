class Solution {
public:
    string compareStrings(string str) {
        string newStr = ""; // to store new strings without backspace
        int count = 0; // to keep count of backspace in strings
        for (int i = str.size() - 1; i >= 0; i--) {
            if (str[i] == '#')
                count++;
            else if (str[i] != '#' && count > 0) {
                count--;
            } else {
                newStr.push_back(str[i]);
            }
        }
        return newStr;
    }
    bool backspaceCompare(string s, string t) {
        string str1 = compareStrings(s);
        string str2 = compareStrings(t);
        return (str1 == str2);
    }
};