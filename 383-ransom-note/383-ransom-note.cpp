class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int rlen = ransomNote.length();
        int mlen =  magazine.length();
        int r[26] = {0};
        int m[26] = {0};
        int i;
        
        // create an array of size 26 for ransomNote and magazine.
        // (for both strings) for each character in the string, increment the value in array, at the respective postion. 
        // compare both arrays, 
                // if value at any postion in maganzine-array is less than ransom-array, then the string cannot be built (return false)
        
        for(i = 0; i < rlen; i++)
        {
            r[ransomNote[i] - 'a']++;
        }
        
        for(i = 0; i < mlen; i++)
        {
            m[magazine[i] - 'a']++;
        }
        for(i = 0; i < 26; i++)
        {
            if(r[i]!= 0)
            {
                if(m[i] < r[i])
                return false;
            }
        }
        
        return true;
        
    }
};

// (previous approach that doesn't cover cases, poor understanding of question)
//     int i, c, j =0;
//     for(i = 0; i < m; i++)
//     {
//         if(ransomNote[0] == magazine[i])
//         {
//             c = i;
//             ++j;
//             ++i;
//             while(j < r && i < m)
//             {
//                 if(ransomNote[j] != magazine[i])
//                 {
//                     break;
//                 }
//                 ++i;
//                 ++j;
//             }
//         }
//         if(j == r)
//             return true;
//     }
//     return false;
        