class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int size=nums.size();
        sort(nums.begin(),nums.end());//sort  this array for applying classical two pointer approach..
        for(int i=0;i<size-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<size-2;j++){
                if(j>i+1 && nums[j]==nums[j-1]) continue;
                int l=j+1,r=size-1;
                while(l<r){
                    long long sum=0LL+nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum<target) l++;
                    else if (sum>target) r--;
                    else{
                        //this means sum==target..
                        result.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;r--;
                        while(l<r && nums[l]==nums[l-1]) l++;
                        while(l<r && nums[r]==nums[r+1]) r--;
                    }
                }
                
            }
        }
        return result;
    }
};