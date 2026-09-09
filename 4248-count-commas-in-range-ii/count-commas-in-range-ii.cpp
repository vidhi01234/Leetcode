class Solution {
public:
    long long countCommas(long long n){ 
        long long res=0;
        if(n>=1000)
            res+=n-1000+1;
        if(n>=1000000)
            res+=n-1000000+1;
        if(n>=1000000000)
            res+=n-1000000000+1;
        if(n>=1000000000000)
            res+=n-1000000000000+1;
        if(n>=1000000000000000)
            res+=n-1000000000000000+1;
        return res;
    }
};