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
     vector<int>A;
    void travel(TreeNode *root)
    {
        if(root!=NULL)
        {
            
            travel(root->left);
            travel(root->right);
             A.push_back(root->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
       travel(root);
        return A;  
    }
};
