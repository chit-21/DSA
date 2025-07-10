// Implement the Trie class:

// Trie() Initializes the trie object.
// void insert(String word) Inserts the string word into the trie.
// boolean search(String word) Returns true if the string word is in the trie (i.e., was inserted before), and false otherwise.
// boolean startsWith(String prefix) Returns true if there is a previously inserted string word that has the prefix prefix, and false otherwise.
 

// Example 1:

// Input
// ["Trie", "insert", "search", "search", "startsWith", "insert", "search"]
// [[], ["apple"], ["apple"], ["app"], ["app"], ["app"], ["app"]]
// Output
// [null, null, true, false, true, null, true]

// Explanation
// Trie trie = new Trie();
// trie.insert("apple");
// trie.search("apple");   // return True
// trie.search("app");     // return False
// trie.startsWith("app"); // return True
// trie.insert("app");
// trie.search("app");     // return True



//  Whenever it talks for substring and some continuous stuff or check availability 
// can also use some unordered_map<char,Trie*> istead of links[26] for memory 


// code:


//  struct Node{
//         Node* link[26];
//         bool flag=false;
//     };

// class Trie {
// public:
//     Node* root;
//     Trie() {
//         root=new Node();
        
//     }
    
//     void insert(string word) {
//         Node* node=root;
//         for(int i=0;i<word.size();i++){
//             if(!node->link[word[i]-'a']){
//                 node->link[word[i]-'a']=new Node();
//             }
//             node=node->link[word[i]-'a'];
//         }
//         node->flag=true;
        
//     }
    
//     bool search(string word) {
//         Node* node=root;
//         for(int i=0;i<word.size();i++){
//             if(!node->link[word[i]-'a'])return false;
//             node=node->link[word[i]-'a'];
//         }
//         return node->flag;
        
//     }
    
//     bool startsWith(string prefix) {
//          Node* node=root;
//         for(int i=0;i<prefix.size();i++){
//             if(!node->link[prefix[i]-'a'])return false;
//             node=node->link[prefix[i]-'a'];
//         }
//         return true;
//     }
// };