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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preArr;
        preorder(root, preArr);
        
        return preArr;
    }
    // recursive approach
    // in preorder traversal:
    // Traverse to Node, then Left node, then Right node
    void preorder(TreeNode *root, vector<int> &preArr)
    {
        if(root == NULL)
            return;
        preArr.push_back(root->val);
        preorder(root->left, preArr);
        preorder(root->right, preArr);
    }
};