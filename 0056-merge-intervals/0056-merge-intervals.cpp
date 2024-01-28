class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> answer;
        // **without use of temporary array**
        // case: if only one interval present
        if(intervals.size() == 1) return intervals;

        // sort the intervals in ascending order
        sort(intervals.begin(), intervals.end());

        // push first value to new array
        answer.push_back(intervals[0]);
        // iterate through all intervals
        for (int i = 1; i < intervals.size(); i++) {
            // case: overlapping intervals
            // if top interval's end is greater than next interval
            // then merge the overlapping intervals
            if (answer.back()[1] >= intervals[i][0]) {
                // update the top interval of answer
                answer.back()[1] = max(answer.back()[1], intervals[i][1]);
            }
            // case: non overlapping intervals
            else {
                // push the next interval to answer, for further comparison
                answer.push_back(intervals[i]);
            }
        }
        return answer;
    }
};