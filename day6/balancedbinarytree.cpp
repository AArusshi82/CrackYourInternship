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
int f(TreeNode* node)
{
    if(node==NULL)
    return 0;
    int l=f(node->left);
    int r=f(node->right);
    if(l==-1||r==-1)
    return -1;
    if(abs(l-r)>1)
    return -1;
    return 1+max(l,r);
}
    bool isBalanced(TreeNode* root) {
        int x=f(root);
        if(x==-1)
        return 0;
        return 1;
    }
};