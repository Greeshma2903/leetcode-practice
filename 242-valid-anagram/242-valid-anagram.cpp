class Solution {
public:
    bool isAnagram(string s, string t) {
        int i, j;
        int first[26] = {0};
        int second[26] = {0};
        if(s.length() != t.length())
            return false;
        
//         APPROACH 2
        for(i = 0; i < s.length(); i++)
        {
            // first string: increment positional values
            first[s[i] - 97]++;
            
            // second string: decrement postional values
            first[t[i] - 97]--;
        }
            
        // if value at any postion is negative, means that the character is not present in the other string/is less than required value. hence, return 'false'.
        for(i =0; i < 26; i++)
        {
            if(first[i] < 0)
                return false;
        }
        
        return true;
    }
};

//      APPROACH 1: 

//         for(i = 0; i < s.length(); i++)
//         {
//             first[s[i] - 97]++;
//         }
//         for(i = 0; i < t.length(); i++)
//         {
//             second[t[i] - 97]++;
//         }

//         for(i = 0; i < 26; i++)
//         {
//             if(first[i] != second[i])
//                 return false;
//         }
//         return true;