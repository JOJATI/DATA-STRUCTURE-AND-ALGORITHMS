class Solution {
public:
    int countCommas(int n) {
        int cnt=0;
        int digit=int(log10(n)+1);
        if(digit<4){
            return 0;
        }
        else{
            while(n>1000){
             cnt++;
                n--;
            }
            return cnt+1;
        }

        
    }
};