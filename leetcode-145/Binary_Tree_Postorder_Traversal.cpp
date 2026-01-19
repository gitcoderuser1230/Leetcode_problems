/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void postorder_helper(TreeNode* root,vector<int>& nums){ // passing by reference play a critical role here just remember it any cost!!!!!!!!!!..
        if(root==nullptr) return; //base case to stop recursion..
        postorder_helper(root->left,nums);
        postorder_helper(root->right,nums);
        nums.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>traversed;
        postorder_helper(root,traversed);
        return traversed;
    }
};