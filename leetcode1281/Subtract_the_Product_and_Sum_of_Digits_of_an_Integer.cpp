class Solution {
public:
    int subtractProductAndSum(int n) {
        int product=1;
        int sum=0;
        while(n>0){
            int digit=n%10 ; //getting the last digit of the given number...
            sum+=digit; //adding the digit obtained with previous value of sum..
            product*=digit; //multiplying the digit obtained with  previous

            n=n/10; // removing off the last digit by making it decimal part and demoting it....
        }
        //after this loop we will have our required values in sum  and product;
        int result=product-sum;
        return result;
    }
};