class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // here one key point that can make swapping algo optimal here is the problem statement itself!!
        // here we will take a variable that stores the size of the array and we can iterate over the  array and if the array element is found equal to the val then we can swap it with the last element of the array and then we will be shrinking the size of the array by one as we have already moved the unnecessary element to last and necessary elements are at first... 
        // and  we will move forward only if the nums[i]==val condition becomes false and this way after full iteration we will get the effective size of the array  equals to the value of k according to the statement what k signinifies!!!
        int s=nums.size();
        int i=0;
        while(i<s){
            if(nums[i]==val){
                swap(nums[i],nums[s-1]);
                s--; //decrement in size as the unwanted element is moved to last..
            }
            else i++;
        }
        return s;
    }
};