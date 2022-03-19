class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        int i;
        for(i = 0; i < s.length(); i++)
        {
            switch(s[i])
            {
                case 'M': sum += 1000; 
                    break;
                case 'D': sum +=500; 
                    break;
                case 'C': sum = (s[i+1] == 'M' || s[i+1] == 'D') ? sum - 100 : sum + 100; 
                    break;
                case 'L': sum += 50; 
                    break;
                case 'X': sum = (s[i+1] == 'L' || s[i+1] == 'C') ? sum - 10 : sum + 10; 
                    break;
                case 'V': sum += 5; 
                    break;
                default:    // case 'I'
                    sum = (s[i+1] == 'X' || s[i+1] == 'V') ? sum - 1 : sum + 1;
            }
        }
        
        return sum;
    }
};

// if(s[i] == 'M')
// {
//     sum += 1000;
// }
// else if(s[i] == 'D')
// {
//     sum += 500;
// }
// else if(s[i] == 'C')
// {
//     if(s[i+1] == 'M' || s[i+1] == 'D')
//         sum -= 100;
//     else 
//         sum += 100;
// }
// else if(s[i] == 'L')
// {
//     sum += 50;
// }
// else if(s[i] == 'X')
// {
//     if(s[i+1] == 'L' || s[i+1] == 'C')
//         sum -= 10;
//     else
//         sum += 10;
// }
// else if(s[i] == 'V')
// {
//     sum += 5;
// }
// else {
//     if(s[i+1] == 'X' || s[i+1] == 'V')
//         sum -= 1;
//     else
//         sum += 1;
// }