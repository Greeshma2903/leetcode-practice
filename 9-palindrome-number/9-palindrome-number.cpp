class Solution {
public:
    bool isPalindrome(int x) {
        // if negative value or the number is multiple of 10
        // return false
        if(x < 0 || x%10 == 0 && x != 0)
            return false;

        // use this variable to store reversed value
        int rev = 0;
        
        // reverse till half of the number
        // the condtion: while original > rev
        while(x > rev)
        {
            rev = (rev * 10) + x % 10;
            x /= 10;
        }
        
        // if reversed number is same as first half of number
        // then return true
        return (x == rev || x == rev/10);
    }
};