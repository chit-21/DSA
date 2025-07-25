// Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

// A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.




// firstly find thr root and then compare 



// code:
// class Solution {
// public:
//     bool solve1(TreeNode* root,TreeNode* subRoot){
//         if(root==NULL && subRoot==NULL)return true;
//         if(root==NULL || subRoot==NULL || root->val!=subRoot->val)return false;
//         return solve1(root->left,subRoot->left) && solve1(root->right,subRoot->right);
//     }


//     bool solve(TreeNode* root, TreeNode* subRoot){
//         if(root==NULL)return false;
//         // if(root==NULL && subRoot==NULL)return true;
//          if (solve1(root, subRoot)) return true;
//         return (solve(root->left,subRoot) || solve(root->right,subRoot));

//     }






//     bool isSubtree(TreeNode* root, TreeNode* subRoot) {
//         if(root==NULL)return false;
//         return solve(root,subRoot);
//     }
// };