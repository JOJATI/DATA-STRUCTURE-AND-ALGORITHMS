class Solution {
public:
    int sortableIntegers(vector<int>& nums) {



        int n = nums.size();
        long long ans = 0;
        vector<int> divisors;

        for (int k = 1; k * k <= n; k++) {
            if (n % k == 0) {
                divisors.push_back(k);
                if (k != n / k)
                    divisors.push_back(n / k);
            }
        }

        for (int k : divisors) {
            bool valid = true;
            int prevMax = INT_MIN;

            for (int i = 0; i < n; i += k) {
                int drops = 0;
                int minVal = INT_MAX;
                int maxVal = INT_MIN;

                for (int j = i; j < i + k; j++) {
                    minVal = min(minVal, nums[j]);
                    maxVal = max(maxVal, nums[j]);

                    int next = (j + 1 == i + k) ? i : j + 1;
                    if (nums[j] > nums[next])
                        drops++;
                }

                if (drops > 1 || prevMax > minVal) {
                    valid = false;
                    break;
                }

                prevMax = maxVal;
            }

            if (valid)
                ans += k;
        }

        return ans;
        
    }
};