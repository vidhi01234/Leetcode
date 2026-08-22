class Solution {
public:
    bool checkDivisibility(int n) {
        if(n==0)
            return true;
        int sum=0,rem;
        long long mul=1;
        int num=n;
        while(n>0)
        {
            rem=n%10;
            sum+=rem;
            mul=mul*rem;
            n=n/10;
        }
        if(num%(sum+mul)==0)
            return true;
        else
            return false;
    }
};