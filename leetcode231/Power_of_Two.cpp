class Solution {
public:
    bool isPowerOfTwo(int n) {
         //return true if number is greater than zero and the number is power of two....
         //using a simple bit manipulation method which does not use loops or recursion just give a one liner result!
         //eg. n=4; n>0(true)=1 --> n&(n-1) = 4&3= 100&011 ==0
         //hence n>0 and (n&(n-1))=0 --> returns true...
        return n>0 and (n&(n-1))==0;
    }
};