class Solution {
public:
    int firstUniqChar(string s) {
        int i, j, flag;
        int size = s.length();
        
        // array<int, size>  arr;
        
        for(i = 0; i < size ; i++)
        {   flag = 0;
            for(j = 0; j < size ; j++)
            {
                if((s[i] == s[j]) && (i != j))
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                return i;
            }
                
        }
        
        // for(i = 0; i < size; i++)
        //     if(arr[i] == 0)
        //         return i;
        
        
        return -1;
    }
};