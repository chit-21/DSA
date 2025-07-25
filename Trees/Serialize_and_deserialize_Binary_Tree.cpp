


// Serialization is the process of converting a data structure or object into a sequence of bits so that it can be stored in a file or memory buffer, or transmitted across a network connection link to be reconstructed later in the same or another computer environment.

// Design an algorithm to serialize and deserialize a binary tree. There is no restriction on how your serialization/deserialization algorithm should work. You just need to ensure that a binary tree can be serialized to a string and this string can be deserialized to the original tree structure.

// Clarification: The input/output format is the same as how LeetCode serializes a binary tree. You do not necessarily need to follow this format, so please be creative and come up with different approaches yourself.









//  string serialize(TreeNode* root) {
//         if(!root){
//              return "NULL,";
//         }
//         return to_string(root->val)+","+serialize(root->left)+serialize(root->right);

//     }

//     // Decodes your encoded data to tree.
//     TreeNode* solve(queue<string> &q){
//         string s=q.front();
//         q.pop();
//         if(s=="NULL")return NULL;
//         TreeNode* root=new TreeNode(stoi(s));
//         root->left=solve(q);
//         root->right=solve(q);
//         return root;
//     }


//     TreeNode* deserialize(string data) {
//         queue<string> q;
//         string s;
//         for(int i=0;i<data.size();i++){
//             if(data[i]==','){
//                 q.push(s);
//                 s="";
//                 continue;
//             }
//             s+=data[i];
//         }
//         if(s.size()!=0)q.push(s);
//         return solve(q);
//     }