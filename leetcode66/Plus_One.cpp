class Solution {
    // here cmath and algorithm header files are also used along vectors for finding power and reversing the  vector..
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        for(int i=size-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0; // this is equivalent to else condition if digit is not less than 9....
        }
        //if  we reach   here  it  means all the digits  are  9....
        digits.insert(digits.begin(),1);
        return digits;
    }
};