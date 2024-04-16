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
    TreeNode* addOneRow(TreeNode* root, int val, int depth,int x=0) {
        if(root==NULL && depth!=1) return NULL;
        if(depth==1){
            TreeNode* n = new TreeNode(val);
            if(x==0) n->left = root;
            else n->right = root;
            return n;
        }
        root->left = addOneRow(root->left,val,depth-1,0);
        root->right = addOneRow(root->right,val,depth-1,1);
        return root;
    }
};
