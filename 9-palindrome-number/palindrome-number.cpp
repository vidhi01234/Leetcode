class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long long num=0;
        int temp=x;
        while(x>0)
        {
            int rem=x%10;
            num=num*10+rem;
            x=x/10;
        }
        if(temp==num)return true;
        else return false;
    }
};