**Approach 1 is faster than Approach 2**
_(3 ms,	7.2 MB	cpp)_

//      APPROACH 1: (faster approach)

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
