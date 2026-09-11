class Solution {
public:
    int prime(int x)
    {   int flag=0;
    if(x<2) return 0;
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {   flag=1;
                return 0;
            }
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int max_elem=0;
        for(int i=0;i<nums.size();i++){
            if(prime(nums[i][i]))
            max_elem = max(nums[i][i],max_elem);
        }
        for(int i=0;i<nums.size();i++){
            if(prime(nums[i][nums.size()-i-1]))
            max_elem = max(nums[i][nums.size()-i-1],max_elem);
        }
        return max_elem;
        
    }
};