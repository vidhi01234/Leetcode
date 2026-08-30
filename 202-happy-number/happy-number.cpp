class Solution {
public:
    int f(int n)
    {
        int rem=0,sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem*rem;
            n=n/10;
        }
        return sum;
    } 
    bool isHappy(int n) {
        int slow=n,fast=n;
        while(fast!=1)
        {
            slow=f(slow);
            fast=f(fast);
            fast=f(fast);
            if(slow==fast && slow!=1)return false;
        }
        return true;
    }
};