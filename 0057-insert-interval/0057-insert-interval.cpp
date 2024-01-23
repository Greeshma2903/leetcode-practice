class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int i = 0;
        // case: add non overlapping values, till overlap found
        // approach: if (starting of newInterval > ending of interval) then add to result
        while(i < intervals.size() && newInterval[0] > intervals[i][1])
        {
            result.push_back(intervals[i]);
            i++;
        }

        // case: merge overlapping values
        // approch: define a new interval, which doesn't overlap after merging
        // check ending value of newInterval > start of interval (merge till next biggest ending value is found)
        while(i < intervals.size() && newInterval[1] >= intervals[i][0])
        {
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }

        // case: push interval after merging
        result.push_back(newInterval);

        // case: add remaining non-overlapping intervals
        while(i < intervals.size())
        {
            result.push_back(intervals[i]);
            i++;
        }
        
        return result;
    }
};