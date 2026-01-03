class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int count=0;
        
        vector<int> result; //vector for storing the sums in....
        result.reserve(nums.size()); //it avoids reallocations and atleast make the capacity of vector equivalent to nums vector!

        while(count<nums.size()){
            //sum is declared inside the loop so  as to reset the sum variable after using the value stored in sum
            int sum=0;// initialize the sum variable for storing the sum of the elements of vector
            for(int i=0;i<=count;i++){
                sum+=nums[i];
            }
            count++;
            result.push_back(sum); //inserting the sum in result vector....
        }
        return result;

    }
};