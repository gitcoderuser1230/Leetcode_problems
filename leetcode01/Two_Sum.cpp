class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // so here we could do this in n time complexity....
        map<int,int> values; //to store the element to check it as remaining value ...
        int size=nums.size(); // stores the size of the provided vector...
        for(int i=0;i<nums.size();i++){

            int remaining=target-nums[i]; //here we are finding other consecutive value of two sum pair 
            if(values.find(remaining)!=values.end()){ // if we could find the remaining value then we found the current element iterating at and the remaining value as two sum pair...

                return {values[remaining],i}; //if found a pair then directly  return from here..
            }
            values[nums[i]]=i; //adding values to map...
        }
        // if we are reached here ,that means any pair does not exist in the vector that could match our target..
        //hence we will return an empty vector in this case...
        return {};
    }
};