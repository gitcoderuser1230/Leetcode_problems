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
    //i have used here another function as helper function because i was confused with return type as vector as i was stuck what to return and what could be the base case there and i saw and understood the void return type so i used it...
    void inorder_helper(TreeNode* root,vector<int> &nums){//one step  that i missed here was this passing vector by reference not by  value as it creates wrong outputs!!!!1
        if(root==nullptr) return; //stop here base case..
        inorder_helper(root->left,nums); //first iterate it over its left child and
        nums.push_back(root->val); //then root node..
        inorder_helper(root->right,nums); //and then its right node as inorder rule..
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        //here recursive approach fits best because the tree have its subtrees also and hence by recursion and definition of inorder traversal we can first traverse the left node then go to root  node and then go to right node if the left or right is also a subtree in itself then we also apply this rule of inorder traversal (left->root->right order is followed...)
        //here no base case only a vector declaration and just inorder traversal and then returning that vector and i found it somewhat easy  so i used this....
        vector<int> traversal;
        inorder_helper(root,traversal);
        return traversal;
    }
};