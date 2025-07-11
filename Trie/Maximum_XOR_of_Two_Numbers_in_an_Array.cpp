// Given an integer array nums, return the maximum result of nums[i] XOR nums[j], where 0 <= i <= j < n.

 

// Example 1:

// Input: nums = [3,10,5,25,2,8]
// Output: 28
// Explanation: The maximum result is 5 XOR 25 = 28.
// Example 2:

// Input: nums = [14,70,53,83,49,91,36,80,92,51,66,70]
// Output: 127


//  using bit manipulation we can find which bit to set 1 by inserting one array in trie
// and checking for a number one by one and setting the digit from left side of 32 bit if opposite state is found and that node


// code:

// struct Node{
//   public:
//    Node* link[2];
// };

// class Trie{
//     public:
//     Node* root;
//     Trie(){
//         root=new Node();
//     }

//     void insert(int num){
//         Node* node=root;

//         for(int i=31;i>=0;i--){
//             int bit=(num>>i) & 1;
//             if(!node->link[bit]){
//                 node->link[bit]=new Node();
//             }
//             node=node->link[bit];
//         }
//     }
     
//      int getMax(int num){
//         int maxi=0;
//         Node* node=root;
//         for(int i=31;i>=0;i--){
//             int bit=(num>>i) & 1;
//             if(!node->link[1-bit]){
//                 node=node->link[bit];
//             } 
//             else{
//                 maxi=maxi | (1<<i);
//                 node=node->link[1-bit];
//             }
//         }
//         return maxi;
//      }
// };

// it can be varied between two arrays and a raay and a number ....