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
    // Recursive approach
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inArr;
        inorder(root, inArr);
        return inArr;
    }
    
    // in inorder traversal:
    // Traverse to the Left node, then Root, then Right node
    void inorder(TreeNode *root, vector<int> &inArr)
    {
        if(!root)
            return;
        inorder(root->left, inArr);
        inArr.push_back(root->val);
        inorder(root->right, inArr);
    }
};