class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //we will insert the element one by one and also check if that element was previously inserted then we can return true otherwise just insert it ...
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                return true; //this means an element  exists in map and hence duplicate found and we return true
            }
            mp[nums[i]]=i; //if the element does not exist then we will reach here and the element will be inserted...
        }
        return false;// if we reach here after all iterations then it basically means that every element is distinct and hence we can return false...
    }
};