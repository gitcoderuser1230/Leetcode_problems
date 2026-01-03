class Solution {
public:
    int addDigits(int num) {
       /* // every digit can be represented as the sum of some multiple of nine and sum of its digits (single digit sum) means..
        //eg- 10 = 9+1 -- here multiple of 9 is 9 here and 1 is the single digit sum of the number...
        //eg-36 =  9x4+0 -- here technically the sum appears to be zero but for every perfect multiple of 9 the single digit sum comes to 9 at last...
        //eg- 0 --here we can see the single digit sum(digital sum) will be 0 

        //here the magical number is 9 only because we use base (10 decimal) number system thats  why we control the overflow with the number 9....

        //so for any positive number except multiple of 9 and number 0 then the num%9 wll give us our required result which is sum of the digits here ...
        //also if we want one liner solution to this problem then we could use this generalized formula also -
        // digital sum= (nums-1)%9+1 where nums is the number....*/

        if (num==0) return 0;
        if(num%9==0) return 9; //every multiple of 9 has digital sum that always converges to 9...
        return num%9;

        //return (n-1)%9+1;
    }
};