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
bool f(TreeNode* node,int t)
{
   if(node==NULL)
    return 0;
t-=node->val;
if(node->left==NULL&&node->right==NULL)
return t==0;

return f(node->left,t)||f(node->right,t);

}
    bool hasPathSum(TreeNode* root, int t) {
      
      
       return f(root,t);
    }
};