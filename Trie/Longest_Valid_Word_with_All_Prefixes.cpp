// Given an array of strings words[], find the longest string such that every prefix of it is also present in words[]. If multiple strings have the same maximum length, return the lexicographically smallest one.

// If no such string is found, return an empty string.

// Examples:

// Input: words[] = ["p", "pr", "pro", "probl", "problem", "pros", "process", "processor"]
// Output: "pros" 
// Explanation: "pros" is the longest word with all prefixes ("p", "pr", "pro", "pros") present.




//  can also check by putting it in the set and checking for the substring


// Code:


// struct Node{
//     Node* link[26];
//     bool flag=false;
// };

// class Trie{
//     public:
//     Node* root;
//     Trie(){
//         root=new Node();
//     }
    
//     void insert(string word){
//         Node* node=root;
//         for(int i=0;i<word.size();i++){
//             if(!node->link[word[i]-'a']){
//                 node->link[word[i]-'a']=new Node();
//             }
//             node=node->link[word[i]-'a'];
//         }
//          node->flag=true;
//     }
    
//     bool check(string word){
//         Node* node=root;
//         for(int i=0;i<word.size();i++){
//             // if(node->link[word[i]-'a'])
//              if (!node->link[word[i] - 'a']) return false;
//             node=node->link[word[i]-'a'];
//             if(!node->flag)return false;
//         }
//         return true;
//     }
// };

// class Solution {
//     public:
//     string longestValidWord(vector<string>& words) {
//         // code here
//         Trie trie;
//         for(auto i:words)trie.insert(i);
//         string longest="";
        
//         for(auto i:words){
//             if(trie.check(i)){
//                 if(i.size()>longest.size())longest=i;
//                 else if(i.size()==longest.size()){
//                     longest=min(longest,i);
//                 }
//             }
//             else continue;
//         }
        
//         return longest;
//     }
// };

