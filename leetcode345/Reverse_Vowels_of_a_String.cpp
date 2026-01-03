class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!isVowel(s[i])) i++; //skip char if it is not a vowel..
            else if(!isVowel(s[j])) j--; //skip char if it is not a vowel...
            else{// swap and then increment and decrement if char is a vowel...
                swap(s[i],s[j]);
                i++;j--;
            }
            
        }
        return s; //return the string of reversed vowels...
    }
public:
    bool isVowel(char c){
        c=tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
};