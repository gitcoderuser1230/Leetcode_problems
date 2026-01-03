class Solution {
public:
//  the square root of  any  number always  lies between one and the number itself, it does not exceeds the number...
//So here we will use binary search algorithm here which will make our code for finding the square root of any number more efficient and optimal satisfying constraints as well as avoiding tle...
    int mySqrt(int x) {
        int low=1; //starting point or lowest of analogus array...
        int high=x; //maximum value of analogus array...
        // int answer=0;

        if(x<2){
            return x; //as square root of 0 and 1 is 0 and 1 itself..
        }
        
        // for other numbers we can iterate over it...
        while(low<=high){
            int middle=low+((high-low)/2); //here this modified formula for finding the middle of low and high helps us to avoid integer overflow as we are subtracting and we will always be in range of integer...
            long long middle_sq= (long long)middle*middle; //finding square of middle....
            if(middle_sq==x){
                return middle; //as in o(1) we could get our square root as square of middle gives us the equal value  to the given value...
            }
            else if(middle_sq<x){
                // answer=middle;
                low=middle+1;
            }
            else{
                high=middle-1;
            }
            
        }
        return high;

    }
};