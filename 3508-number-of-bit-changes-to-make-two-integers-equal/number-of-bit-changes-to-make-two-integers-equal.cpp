class Solution {
public:
    int minChanges(int n, int k) {
        
         int count = 0;

        while (n > 0 || k > 0) {
            int nb = n & 1;
            int kb = k & 1;

            if (nb == 0 && kb == 1)
                return -1;

            if (nb == 1 && kb == 0)
                count++;

            n >>= 1;
            k >>= 1;
        }

        return count;
    }
};