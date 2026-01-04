class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //here we used simple naive approach here like first sorting the array then all similar elements became adjacent and as all numbers are three then we can step at interval of 3 and also handle the edge cases on the go..
        int n=nums.size();
        sort(nums.begin(),nums.end());//sort
        //now we will iterate at interval of 3 i=0,3,6,9,....
        //if current element is not equal to its next element then we can return the current element...
        //in this we are not including last element but including first element also as it can be handled in this...
        for(int i=0;i<n-1;i+=3){
            if(nums[i]!=nums[i+1]) return nums[i];
        }
        return nums[n-1];// here if we reach then it means we cannot find an element which is at starting and in middle so for sure it will be the last element and can directly return the last element...
    }
};