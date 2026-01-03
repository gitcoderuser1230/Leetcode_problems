class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=s.length();
        int i=0,j=0; //two pointers for sliding window initialized to zero(pointing to the starting character of the string)...
        unordered_set<char> us;
        int maxlen=0; // we will be storing the maximum length of the substring...
        while(j<l){
            if(us.find(s[j])==us.end()){
                // expanding the window if unique character found...
                //if we reach here that means the charcter is not repeated..
                us.insert(s[j]); //inserting jth character and moving forward...
                j++;
                maxlen=max(maxlen,j-i); //as we are moving forward so we have to update maxlen with j-i if it is greater than present value of maxlen...
            }
            else{
                //shrinking the window if duplicate character found..
                //if if condition is false then it means that duplicate is encountered..
                us.erase(s[i]); //removing ith character and moving forward the left pointer
                i++;
            }

        }

        return maxlen; //returning maxlen where we have the length of the longest substring without repeating characters...
    }
};