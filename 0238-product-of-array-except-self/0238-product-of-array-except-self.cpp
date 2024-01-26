class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> suf(n);
        pre[0] = 1;
        suf[n - 1] = 1;
        
        //  prefix array: initiate from the front
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] * nums[i - 1];
        }

        // suffix array: initiate from backwards
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = suf[i + 1] * nums[i + 1];
        }

        // answer = pre * suf
        vector<int> answer(n);
        for (int i = 0; i < n; i++) {
            answer[i] = pre[i] * suf[i];
        }

        return answer;
    }
};