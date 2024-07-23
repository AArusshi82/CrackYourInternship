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

TreeNode* f(vector<int>& a,int s,int e)
{
    if(s>e)
    return NULL;
    int mid=(s+e)/2;
    TreeNode* node = new TreeNode(a[mid]);
    node->left=f(a,s,mid-1);
    node->right=f(a,mid+1,e);
    return node;

}
    TreeNode* sortedArrayToBST(vector<int>& a) {
        if (a.empty()) {
        return nullptr;
    }
    //TreeNode* root;
        int s=0,e=a.size()-1;
    return f(a,s,e);
    
    }
};