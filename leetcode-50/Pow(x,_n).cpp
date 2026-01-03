class Solution {
public:
    double myPow(double x, int n) {
        //binary exponentiations... this is the efficient way which reduces our time complexity to O(log n)
        //here if we try to apply  the normal brute force approach of using loop then it could encounter tle..
        double result=1;
        long long power=n;
        //to handle the integer edge cases we will use power variable here to handle overflow case..
        if(power<0){
            //we have to handle negative  powers also..
            x=1/x;
            power=-(power); //here n is not directly used because it can cause overflow so we assigned it to long variable data type and then convert the negative power to positive 
        }
        while(power>0){
            if(power%2==1) result=result*x;
            x=x*x; //update x to x^2...
            // in this way we will solve this in lesser iterations...
            power=power/2;
        }
        return result;
    }
};
