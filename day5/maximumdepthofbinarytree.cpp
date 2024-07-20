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
int f(TreeNode* node,int& m)
{
   if(node==NULL)
   return 0;

   int l=f(node->left,m);
   int r=f(node->right,m);
   return 1+max(l,r);
}
    int maxDepth(TreeNode* root) {
        int m=0;
    return f(root,m);
        //return m;
    }
};