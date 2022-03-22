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
public:
    bool isBalanced(TreeNode* root) {
        // if value is -1, means the tree is not balanced
        return (checkBalance(root) != -1);
    }
    
    int checkBalance(TreeNode *root)
    {
        // recursive function
        
        // null tree is balanced
        if(root == NULL)
            return 0;
        
        // calculate height of left subtree of any node
        int left = checkBalance(root->left);
        if(left == -1) return -1;
        
        // calculate height of right subtree of any node
        int right = checkBalance(root->right);
        if(right == -1) return -1;
        
        // at every node, 
        // if:
        // the absolute difference of it's left and right subtree is greater than 1, then return -1
        // this -1 condition is checked above as well, and indicates that the tree is imbalanced
        // since recursive functions do a depth search, we establish a '-1' return condition
        // else if:
        // the abs difference is < 1, return to calculate the height as usual
        if(abs(left - right) > 1) 
            return -1;
        return max(left, right) + 1;
    }
};