class Solution {
public:
    bool isPalindrome(string s) {
        //in cpp there also exists an easy way  to deal with this problem and we can use two pointers here one from start and one from end and move them accordingly 
        //isalnum() -> function that checks if the string contains alphanumeric chars only..
        // s.lebgth() -> returns the length of the given string..
        //tolower() -> convert the string or character from uppercase to lowercase...

        int i=0;//to start from left and move forward..
        int j=s.length()-1; //to start form right and move backward..

        while(i<j){
            // these are all dependent conditions..
            //if s[i] is not alphanumeric just ignore it and move forward...
            if(!isalnum(s[i])) i++;
            // if s[j] is not alphanumeric just ignore it and move backward...
            else if(!isalnum(s[j])) j--;
            
            else{
                if(tolower(s[i])!=tolower(s[j])) return false; // if we reach here means we found a mismatch and that will clearly say s is not a palindrome...
                i++;
                j--;
            }
        }
        return true; //if we reached here means the  string is a palindrome so we can say return true..
    }
};
            
