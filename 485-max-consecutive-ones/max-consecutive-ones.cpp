class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int count=0;
        int j=0;
        int fcount=0;
      while(j<nums.size())
      {
        if(nums[i]==1 && nums[j]==1)
        {
            count++;
            j++;
            fcount=max(count,fcount);

        }
        else
        {
            count=0;
            j++;
            i=j;
        }

      }

      return fcount;


        
    }
};