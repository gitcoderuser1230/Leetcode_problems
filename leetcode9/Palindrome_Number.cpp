class Solution {
public:
    bool isPalindrome(int x) {
       // here my or general approach  that hits in mind is to reverse the whole digit and check their equality which help us know if the x is palindrome or not but one thing we can encounter here while reversing is the overflow condition where we need to handle it and that makes our code longer...
       //but we can check this by half reversal technique also if we only reverse half the digit and check if they are equal then we can also say that the number is a palindrome and here main pros is that we dont need to handle overflow case. this works because palindrome has symmetry in its numbers which helps us to solve this in this way..
       //so here we will use half reversal only for better output..
       if(x<0) return false; // if any number given is less than zero or negative then we can directly say it is not a palidrome..
       if(x%10==0 and x!=0) return false; //similarly  for the numbers that are the multiple of 10 eg 10,50,100..

       int reverse=0;
       while(reverse<x){
        int digit = x%10;
        reverse=(10*reverse)+digit;
        x=x/10; //update the value of x...
       }
       if(reverse>x) reverse=reverse/10;
       if(reverse==x) return true;
       return false; // if we reach here at end that means all the conditions above for edge cases are not satisfied and even the given number is not a palindrome number and hence we can confidently return false...
    }
};
       

       