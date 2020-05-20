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
    int count=0;
    void inorder(TreeNode *root,int &element,int k){
        if(!root){
            return ;
        }
        inorder(root->left,element,k);
        count++;
        if(count==k){
            element=root->val;
        }
        inorder(root->right,element,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int element=0;
        inorder(root,element,k);
        return element;
    }
};
