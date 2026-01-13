class Solution {
public:
    bool isAnagram(string s, string t) {
        // i applied this logic and it is also correct but efficient approach is also considerable...
        // if(s.length()!=t.length()) return false;
        // unordered_map<char,int> scheck;        
        // unordered_map<char,int> tcheck;
        // // bydefault all keys are initialized to 0
        // for(char x:s){
        //     // if(scheck.find(x)==scheck.end()){
        //     //     scheck[x]=1;
        //     // }else{
        //     //     scheck[x]++;
        //     // }
        //     // the above whole logic can be simplified to this 
        //     scheck[x]++;
        // }        
        // for(char y:t){
        //     tcheck[y]++;
        // this is simple use of one map as equal frequencies should cancel each other so each value of key should be 0 if it is a anagram else  not!!!!
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> frequency;
        for(char x:s) frequency[x]++;// it is making 0 to one or greater than it..
        for(char x:t) frequency[x]--;//it is making one or greater than it to 0 if it is a anagram else not..
        for(auto it:frequency) if(it.second!=0) return false;
        
        return true; //if we reach here then it means it is a anagram as no condition for returning false is satisfied...
        // return scheck==tcheck;        
    }
};