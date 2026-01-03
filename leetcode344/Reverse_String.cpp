class Solution {
public:
    void reverseString(vector<char>& s) {
        // we can use two pointers here to iterate from front and back and then with the help of swapping we can reverse the string when left pointer<=right pointer...
        int i=0;
        int j=s.size()-1;

        while(i<j){ //swapping and moving until the condition is met..
            swap(s[i],s[j]);
            i++;j--;
        }
    }
};