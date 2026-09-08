class Solution {
public:
    int countCommas(int n) {
        long count=0;
        if(n>=1000)
            count+=n-1000+1;
        if(n>=1000000)
            count+=n-100000+1;
        return count;
    }
};