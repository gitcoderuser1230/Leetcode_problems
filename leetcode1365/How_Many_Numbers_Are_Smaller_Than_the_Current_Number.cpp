class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        //here are approach could if we could somehow sort the nums vector on temporary basis and then extract the indices of the elements and those are the elements for our final output that we can push it into our answer vector...
        //we can use map for storing those indices of elements with their elements and then access them and insert it into the final output vector named answer....
        int n=nums.size();
        vector<int> sorted=nums; //making a copy of the vector named sorted
        sort(sorted.begin(),sorted.end()); //this is the main reason we created its copy cuz we wanted 
        
        unordered_map<int,int>  mp; // unordered  map for storing those special indices of the elements..

        vector<int> answer(n);

        for(int i=0;i<sorted.size();i++){ //this loop will insert the elements with those indices..
            if(mp.find(sorted[i])==mp.end()){ //this important condition ensures that duplicate values cannot get inserted and we could avoid redundancy...
                mp[sorted[i]]=i; //inserting values...
            }
        }

        for(int  i=0;i<nums.size();i++){ //this for loop is for inserting the indices of those values obtained from map to our answer vector..
            answer[i]=mp[nums[i]];
        }
        return answer; //finally returning our output...
    }
};