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
    // a helper function with  void return type that simply pushes back the root then traverse to left and then right node of the given root node...
    void preorder_helper(TreeNode* root,vector<int>  &nums){
        if(root==nullptr) return;
        nums.push_back(root->val);
        preorder_helper(root->left,nums);
        preorder_helper(root->right,nums);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        //here no confusing base case for vector return type that's why above function i defined 
        vector<int> traversed;
        preorder_helper(root,traversed);
        return traversed;
    }
};