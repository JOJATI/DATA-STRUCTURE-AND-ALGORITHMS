int first(vector<int>& nums,int n, int target)
{
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(nums[mid]==target)
        {
            e=mid-1;
            ans=mid;
        }
        else if(nums[mid]<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
    }
    return ans;
}
int last(vector<int>& nums,int n, int target)
{
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
        if(nums[mid]==target)
        {
            s=mid+1;
            ans=mid;
        }
        else if(nums[mid]<target)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
    }
    return ans;
}


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int f=first( nums, n, target);
          int l=last( nums, n, target);
return {f,l};
    }
};