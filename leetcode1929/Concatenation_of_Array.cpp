class Solution {
public:
//very  simple approach we can follow or the brute force could also be this that applying two for loops for adding  all the elements two times so here the both  time and space complexity could be O(n)...
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> answer; //created vector for storing the output 
        answer.reserve(2*nums.size()); //this atleast stores the twice the capacity as the nums vector..
        int nums_size=nums.size(); //size of the nums vector..
        for(int i=0;i<nums_size;i++){
            answer.push_back(nums[i]);
        }

        for(int i=0;i<nums_size;i++){
            answer.push_back(nums[i]);
        }
        return answer; //after two  times iterations now we have the vector of nums concatenated with itself..

    }
};