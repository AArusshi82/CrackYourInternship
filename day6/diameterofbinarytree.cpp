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
int f(TreeNode* node,int& ma)
{
    if(node==NULL)
    return 0;
    int l=f(node->left,ma);
    int r=f(node->right,ma);
    ma=max(ma,l+r);
    return 1+max(l,r); 
}
    int diameterOfBinaryTree(TreeNode* root) {
        int ma=0;
        f(root,ma);
        return ma;
    }
};