const int n = 5*1e6 + 1;
vector<bool>isPrime(n+1, true);
    
class Solution {
public:
    
    void Compute(){
        isPrime[0] = isPrime[1] = false;
        if(isPrime[4] == false)return;
        for (int i = 2; (long long)i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i)
                    isPrime[j] = false;
            }
        }
    }
    int countPrimes(int n) {
        Compute();
        int cnt=0;
       
        for(int i = 2 ; i < n ; i++){
            if(isPrime[i])cnt++;
        }
        return cnt;
    }
};