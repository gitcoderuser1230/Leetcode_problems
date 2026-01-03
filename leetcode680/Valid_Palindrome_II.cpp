class Solution {
public:
    bool validPalindrome(string s) {
        //here we will define a isPalindrome() function to check if the string is a palindrome or not...
        int l=0;
        int r=s.length()-1;

        while(l<r){
            if(s[l]!=s[r]) return isPalindrome(s,l+1,r) || isPalindrome(s,l,r-1); // as atomost one deletion is allowed so we check by either incrementing left pointer or decrmenting right pointer this will check if in that case if the string is palindrome or not....
            else {
                l++;
                r--;
            }
        }
        return true;// if we reach here means the string is already a palindrome and we can return true here...
        
    }
public:
    bool isPalindrome(string t,int i,int j){ //this function will help us to use in our main logic 

        while(i<j){
            if(t[i]!=t[j]){
                return false; //if we reach here that means that character is not found to be not equal hence we can return false here....
            }
            i++;j--; //otherwise increment and decrement the pointers...
        }
        return true; //if we return here that means the string characters are found to be equal and hence we can return true here...
    }

};