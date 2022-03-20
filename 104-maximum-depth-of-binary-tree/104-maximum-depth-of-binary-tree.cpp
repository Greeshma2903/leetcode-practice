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
    int maxDepth(TreeNode* root) {
        // Recursive approach
        int h = height(root);
        
        return h;
    }
    
    int height(TreeNode *root) {
        if(root == NULL)
            return 0;
        // height of left subtree
        int h_left = height(root->left);
        // height of right subtree
        int h_right = height(root->right);
        
        if(h_left > h_right)
            return (1 + h_left);
        else 
            return (1 + h_right);
    }
};