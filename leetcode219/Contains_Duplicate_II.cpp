class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // for checking duplicates we simply store each element in unordered map and then check if the element we are currently inserting is already present in our map we previously inserted it and then we can go ahead acc to our problem...
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){ //this means that the element exists in map then we can go ahead..
            if(mp.find(nums[i])!=mp.end()){
                if(abs(mp[nums[i]]-i)<=k) return true;
            }
            mp[nums[i]]=i; // if the condition does not met then we reach here and updated the index...
        }
        return false; //if we reach here then it means that we cannot find any duplicate hence we can return false here....        
    }
};