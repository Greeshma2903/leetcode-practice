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
    vector<int> postorderTraversal(TreeNode* root) {
        // Recursive approach
        vector<int> postArr;
        postorder(root, postArr);
        return postArr;
    }
    
    // in postorder traversal:
    // Traverse the Left node, then Right node, and then the Root node
    void postorder(TreeNode *root, vector<int> &postArr)
    {
        if(!root)
            return;
        postorder(root->left, postArr);
        postorder(root->right, postArr);
        postArr.push_back(root->val);
    }
};