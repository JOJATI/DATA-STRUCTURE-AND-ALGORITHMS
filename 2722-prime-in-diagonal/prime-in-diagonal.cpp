class Solution {
public:
   bool prime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
        return true;
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