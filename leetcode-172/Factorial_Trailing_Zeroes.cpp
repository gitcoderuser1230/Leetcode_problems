class Solution {
public:
    int trailingZeroes(int n) {
        int count=0;
        while(n>0){
            n=n/5; //divide the number by five and assign the value in the variable n itself..
            count+=n; //and add the value of n to the count variable with its existing value and n as n is now n/5..
            //eg - n=50 --> 50/5=10 count=0+10=10; n=10/5=2 count=10+2=12; n=2/5=0 (now here the loop stops..)
        }
        return count; //at the end return the count variable where we have stored the number of trailing zeroes in the factorial..
    }
};