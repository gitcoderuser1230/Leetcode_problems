class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //here firstly i thought of first making any of the negative value positive and then sort it and then return the same vector with the squares of each element but that could make out TCasO(nlogn) and according to our follow up we have to do this in O(n) so we can use two pointer approach here and intentionally we will use another vector with same size and put each element required in that vector and at end return that vector... 
        int size=nums.size(); //size of given vector..
        vector<int> result(size); //vector declared where my  final output will be stored acc to the  problem..
        int i=0,j=size-1;//two pointers pointing to left and right..
        int pos=size-1; // a position pointer that will iterate to our result vector and we will insert squares from last at pos index and then decrement it and get out final vector at end..
        while(i<=j && pos>=0){ //this condition makes sure we do not go out of boundaries..
            if(abs(nums[i])>abs(nums[j])){ //we consider the absolute values if any value is negative.. 
                result[pos]=nums[i]*nums[i]; //greater value have greater square so we will insert it from back and move the corresponding pointer forward or backward like here left pointer i will go forward in this case..
                i++;
            }
            else{ //if this it means absolute value of element at j is greater than i so we will put its square at pos index and move it backward..
                result[pos]=nums[j]*nums[j];
                j--;
            }
            pos--; //in any of the case our pos will get decremented on each iteration...
        }
        return result; // at end we have our result vector with stored squares of the elements of given vector in non decreasing order...
    }
};