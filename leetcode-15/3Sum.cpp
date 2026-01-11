class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //here we will modify the two sum logic here in order to solve three sum here...
        // as the condition highly demands of unique elements or avoiding duplicate triplets so we need to handle this condition also on the go...
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0 and nums[i]==nums[i-1]) continue;
            int target=-(nums[i]);
            int l=i+1,r=nums.size()-1;
            while(l<r){ //in order to ignore duplication..
                int sum=nums[l]+nums[r];
                if(sum==target) {
                    result.push_back({nums[i],nums[l],nums[r]}); //we will push this result and then move forward to the unexplored  part as this is covered so we will  not include this again...
                    //skip duplicates..
                    while(l<r and nums[l]==nums[l+1]) l++; //as l is moving forward so...
                    while(l<r and nums[r]==nums[r-1]) r--; //as r is moving backwards so...
                    // after we reach to the last duplicate then we will we will finally increment to the unique value manually 
                    l++;r--;
                }
                else if(sum>target) r--;
                else l++;
            }
        }
        return result;
    }
};