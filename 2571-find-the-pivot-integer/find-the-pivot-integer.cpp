class Solution {
public:
    int pivotInteger(int n) {
        //Its a solution through AP
        //1 to x sum is x(x+1)/2 ans x to n sum is N/2(a+l)then equate both side
        //x=sqrt(n(n+1)/2)
        int sum=n*(n+1)/2;
        int x=sqrt(sum);
        if(x*x==sum)return x;
        return -1;
    }
};