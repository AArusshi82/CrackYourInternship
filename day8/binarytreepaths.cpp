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
void f(TreeNode* node,string s,vector<string>& ans)
{
     if (node == nullptr) {
            return;
        }
        
        if (!s.empty()) {
            s += "->";
        }
        s += to_string(node->val);
        
        if (node->left == nullptr && node->right == nullptr) {
            ans.push_back(s);
            return;
        }
        
        if (node->left) {
            f(node->left, s, ans);
        }
        
        if (node->right) {
            f(node->right, s, ans);
        }
}
    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        vector<string> ans;
        f(root,s,ans);
        return ans;

    }
};