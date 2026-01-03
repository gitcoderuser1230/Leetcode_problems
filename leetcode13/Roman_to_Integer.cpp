class Solution {
public:
    int romanToInt(string s) {
        // we created a simple unordered map of all symbols and their mapped values to compare them when iterating over the given string of characters...
        unordered_map<char,int>mp={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };

        int result=0; //for storing the final answer in integer form...
        for(int i=0;i<s.length();i++){
            if(i+1<s.length() and mp[s[i]]<mp[s[i+1]]) result=result-mp[s[i]];
            else result=result+mp[s[i]];
        }
        return result;
    }
};