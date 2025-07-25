// Given the root of a binary search tree, and an integer k, return the kth smallest value (1-indexed) of all the values of the nodes in the tree.




// can surely solved in inorder traveral and later on return arr[k-1]
// but we can do it also in constatnt space by using morris traversal 




// code:


// class Solution {
// public:
//     int kthSmallest(TreeNode* root, int k) {
//         int count=0;
//         int res=-1;
//         TreeNode* curr=root;
//         while(curr!=NULL){
//             if(curr->left==NULL){
//                 count++;
//                 if(count==k)res= curr->val;
//                 curr=curr->right;
//             }
//             else{
//                 TreeNode* pred=curr->left;
//                 while(pred->right!=NULL && pred->right!=curr)pred=pred->right;
//                 if(pred->right==NULL){
//                     pred->right=curr;
//                     curr=curr->left;
//                 }
//                 else{
//                     pred->right=NULL;
//                     count++;
//                     if(count==k)res= curr->val;
//                     curr=curr->right;
//                 }
//             }
//         }
//         return res;
//     }
// };