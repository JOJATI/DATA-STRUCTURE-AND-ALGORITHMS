class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {

        int a=x,sum=0;
        while(a!=0)
        {
            sum=sum+a%10;
            a/=10;
        }

        if(x%sum==0)
        {
            return sum;
        }
        return -1;
        
    }
};