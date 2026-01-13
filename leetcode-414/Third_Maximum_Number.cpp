class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // int size=nums.size();
        // sort(nums.begin(),nums.end());
        // if(size<3&&nums[0]!=nums[1]){
        //     return nums[1];
        // }
        // if(size==3&& (nums[0]!=nums[1] && nums[1]!=nums[2])){
        //     return nums[0];
        // }
        // int thirdmax=size-3; 
        // while(thirdmax>=0&&thirdmax<=size-3){
        //     if(nums[thirdmax]==nums[thirdmax-1]) thirdmax--;
        // }
        // return thirdmax;
        sort(nums.begin(),nums.end());int size=nums.size(),unique=1; //distinct  is already one because we can say that last element is unique always and other elements will be compared with it and if same then count will remain one as duplicates counts as 1 only at the end...
        for(int i=size-2;i>=0;i--){ //starting from last  second element...
            if(nums[i]!=nums[i+1]) unique++; //if the last ith element is not equal to i+1th  index then it is unique and we can increment unique by one..
            if(unique==3)return nums[i]; //if unique is three then we can return that element when unique becomes 3...
        }
        return nums[size-1]; //else distinct elements are less than 3 and we can return the maximum element of the array...
    }
};