class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int largest = 0,count, i, j;
        for(i =0; i < sentences.size(); i++)
        {   count = 1;
            for(j =0; j < sentences[i].length(); j++)
            {
                if(sentences[i][j] == ' ')
                    count++;
            }
            largest = max(count, largest);  // compare the size of last string and current and store the largest value among all
        }
        return largest;
    }
};