/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int level[105];
    int parent[105];
public:
    void dfs1(TreeNode* root,int depth,int p){
        if(root==NULL)return ;
        level[root->val]=depth;
        parent[root->val]=p;
        if(root->left)dfs1(root->left,depth+1,root->val);
        if(root->right)dfs1(root->right,depth+1,root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        dfs1(root,0,-1);
        if(level[x]==level[y] && parent[x]!=parent[y]){
            return true;
        }
        else return false;
       
        
    }
};
