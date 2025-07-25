// A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root.

// The path sum of a path is the sum of the node's values in the path.

// Given the root of a binary tree, return the maximum path sum of any non-empty path.




//  for each node either it is the aprt of it with left sub tree or it wiith right sub tree or it with both side subtree
// maximizing it to the top 



// code:
// class Solution {
// public:
// int maxi=INT_MIN;
//     int solve(TreeNode* root){
//         if(root==NULL)return 0;
//         int left=solve(root->left);
//         int right=solve(root->right);
//         maxi=max({maxi,root->val,root->val+left,root->val+right,root->val+left+right});
//         return max({root->val,root->val+left,root->val+right});
//     }




//     int maxPathSum(TreeNode* root) {
//         if(root==nullptr)return 0;
//         solve(root);
//         return maxi;
//     }
// };

 