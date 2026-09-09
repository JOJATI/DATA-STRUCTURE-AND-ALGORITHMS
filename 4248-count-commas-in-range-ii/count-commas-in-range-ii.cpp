class Solution {
public:
    long long countCommas(long long n) {
        long long start=1000;
        long long cnt=0;
        int coma=1;
        while(start<=n){
            long long end=min(n,start*1000-1);
            cnt+=(end-start+1)*coma;
            start*=1000;
            coma++;
        }
        return cnt;
    }
};