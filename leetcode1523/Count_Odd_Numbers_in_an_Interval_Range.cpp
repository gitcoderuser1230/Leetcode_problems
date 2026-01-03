class Solution {
public:
    int countOdds(int low, int high) {
        if((low%2==0) and (high%2==0)){
            return ((high-low)/2); //if both low and high are even then all the odds will be already counted inside it by dividing it with 2..
        }
        else{
            return ((high-low)/2)+1; //here to include boundary odd number we have to add one to count it too...
        }
    }
};