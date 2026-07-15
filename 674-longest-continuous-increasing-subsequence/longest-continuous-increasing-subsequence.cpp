class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count = 1;
        int mx = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                count++;
            }
            else {
                mx = max(count, mx);
                count = 1;
            }
        }
        return max(count, mx);
    }
};