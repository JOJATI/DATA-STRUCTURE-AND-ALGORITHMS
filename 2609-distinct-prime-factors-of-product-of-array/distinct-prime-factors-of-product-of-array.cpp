class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int> compute_spf;

        for (int n : nums) {
            for (int p = 2; p * p <= n; p++) {
                if (n % p == 0) {
                    compute_spf.insert(p);

                    while (n % p == 0) {
                        n /= p;
                    }
                }
            }

            
            if (n > 1) {
                compute_spf.insert(n);
            }
        }

        return compute_spf.size();
    }
};