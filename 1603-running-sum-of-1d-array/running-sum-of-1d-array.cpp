class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>new_array;

        int sum=0;
        for(int i=0;i<nums.size();i++){
           sum+=nums[i];
           new_array.push_back(sum);

        }
        return new_array;

     
        
    }
};