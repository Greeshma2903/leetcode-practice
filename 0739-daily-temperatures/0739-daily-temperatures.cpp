class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // Approch: Making use of monotonic stack for saving next biggest values
        int n = temperatures.size();
        stack<int> nge;
        vector<int> answer(n, 0);

        // move from right to left
        for (int i = n - 1; i >= 0; i--) {
            // If stack is not empty, and the next greatest element compared to
            // current is yet to be found, then keep popping the stack
            while (!nge.empty() && temperatures[nge.top()] <= temperatures[i]) {
                nge.pop();
            }

            // now we know, that the top of stack is greater than current
            // element:
            //  save the difference of current ele's index and greater ele's
            //  index
            if (!nge.empty())
                answer[i] = nge.top() - i;
            // push current element to stack top
            nge.push(i);
        }
        return answer;
    }
};