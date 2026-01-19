class Solution {
public:
    char findTheDifference(string s, string t) {
                //and one easy and naive approach could be xor all elements and eventually the left element is our answer in t as it is explicitly mentioned for t...
        unordered_map<char,int> freq;
        for(char c:s) freq[c]++;
        for(char c:t) freq[c]--;

        for(auto it=freq.begin();it!=freq.end();it++){
            // and as it is a pointer so we use ->here else we can use by reference and then we can use . here also...
            if(it->second==-1) return it->first; //here -1 is considered only because t only has extra char...
        }
        return '\0';
    }

};