class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // we can simply approach this problem by first sorting the array using cyclic sort and then iterating over the sorted array to find our missing number and finally returning that missing number..       
        //for efficiency  we have defined a function for sorting the array...
        cyclic_sort(nums);
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i) return i;
        }
        return nums.size(); //that means we cannot find missing number in 0 to n-1 range hence the missing number would be the nth number and we can return it..
    }
public:
    void cyclic_sort(vector<int>& vec){
        int i=0;
        while(i<vec.size()){
            int correct_index=vec[i];
            if(correct_index<vec.size()  and vec[i]!=i){
                swap(vec[i],vec[correct_index]);
            }else i++;
        }
    }
};