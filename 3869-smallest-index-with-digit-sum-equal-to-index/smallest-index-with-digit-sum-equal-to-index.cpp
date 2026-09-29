class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        vector<int> store;
        for(int i=0;i<nums.size();i++){
        int sum=0;
        while(nums[i]) {
        int digit = nums[i] % 10;
        sum += digit;
        nums[i] /= 10;
}
           if(sum==i) 
           {
            store.push_back(i);
           }
        }
      if (store.empty())
    return -1;

return *min_element(store.begin(), store.end());
        
    }
};