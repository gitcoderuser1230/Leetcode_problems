class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i=1; //for iterating on stream..
        int j=0; //for checking the target elements  
        vector<string> operation;

        while(i<=n){
            operation.push_back("Push");
            if(i==target[j]){
            //incrementing lets also check if our j reaches the size of the array...
                j++;
                if(j==target.size()) break;
            }
            else operation.push_back("Pop");
            i++;

        }
        return operation; //returning the  final operation vector with our final answers stored...
    }
};