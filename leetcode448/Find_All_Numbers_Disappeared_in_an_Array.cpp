class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // here applying cyclic sort for sorting and then checking which number is missing here could  be better approach which also obeys the follow up of using o(1) space and O(n) time complexity...
        //worst case of cyclic sort is where 2n-1 swaps are to made in an array of 1 to n integers...
        vector<int> result; //a vector for returning the error which is  according to the questions as  we can assume this to not counting this as an extra space...
        int i=0;
        //sorting phase 
        while(i<nums.size()){
            int correct=nums[i]-1;
            if(nums[i]!=nums[correct]) swap(nums[i],nums[correct]);
            else i++;
        }
        //after sorting phase now one task left is to iterate over the sorted array once and check for the missing elements and add them in the result vector...

        for(int j=0;j<nums.size();j++){
            if(nums[j]!=j+1) result.push_back(j+1);
        }

        return result;
    }
};