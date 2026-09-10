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
int total(TreeNode* root, int &count, int &sum){
    if(root==NULL){
        return 0;
    }
    sum += root->val;
    count++;
    total(root->left, count, sum);
    total(root->right, count, sum);

    return (sum/count);
}

class Solution {
public:
    int averageOfSubtree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int count = 0, sum = 0, ans = 0;
        int avg = total(root, count, sum);
        if(avg==root->val){
            ans++;
        }
        ans += averageOfSubtree(root->left);
        ans += averageOfSubtree(root->right);

        return ans;
    }
};