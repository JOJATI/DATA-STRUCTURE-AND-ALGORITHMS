class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n=heights.size();
        int expected[n];

        for(int i=0;i<n;i++)
        {
            expected[i]=heights[i];
        }
        std::sort(expected,expected+n);


        int count=0;
        for(int i=0;i<n;i++)
        {
            if(heights[i]!=expected[i]) count+=1;
        }
        return count;
        
    }
};