// Given the root of a binary tree, determine if it is a valid binary search tree (BST).

// A valid BST is defined as follows:

// The left subtree of a node contains only nodes with keys less than the node's key.
// The right subtree of a node contains only nodes with keys greater than the node's key.
// Both the left and right subtrees must also be binary search trees.
 




// standard Bst 



// code:
// class Solution {
// public:
//     bool solve(TreeNode* root,long long start,long long end){
//         if(root==NULL)return true;
//         if(root->val<=start || root->val>=end)return false;
//         bool left=solve(root->left,start,root->val);
//         bool right=solve(root->right,root->val,end);
//         return left && right;
//     }





//     bool isValidBST(TreeNode* root) {
//         if(root==NULL)return true;
//         return solve(root,LLONG_MIN,LLONG_MAX);
//     }
// };