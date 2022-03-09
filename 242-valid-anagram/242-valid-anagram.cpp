class Solution {
public:
    bool isAnagram(string s, string t) {
        int i, j;
        int first[26] = {0};
        int second[26] = {0};
        if(s.length() != t.length())
            return false;
        
        for(i = 0; i < s.length(); i++)
        {
            first[s[i] - 97]++;
        }
        for(i = 0; i < t.length(); i++)
        {
            second[t[i] - 97]++;
        }

        for(i = 0; i < 26; i++)
        {
            if(first[i] != second[i])
                return false;
        }
        return true;
    }
};