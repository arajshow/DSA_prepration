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
    bool find(TreeNode* root, int k){
        if(root->val==k) return true;
        else if(root->val<k) return find(root->right, k);
        else return find(root->left, k); 
    }
        
        
    bool findTarget(TreeNode* root, int k) {
        int a= k-root->val;
        if(root->val=<a){
            return find(root->right, a);
        }else if(root->val>a){
            return find(root->left,a);
        }
        
        
    }
};