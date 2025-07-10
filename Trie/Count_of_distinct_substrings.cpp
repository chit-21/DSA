// Given a string of length N of lowercase alphabet characters. The task is to complete the function countDistinctSubstring(), which returns the count of total number of distinct substrings of this string.

// Input:
// The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case contains a string str.

// Output:
// For each test case in a new line, output will be an integer denoting count of total number of distinct substrings of this string.

// User Task:
// Since this is a functional problem you don't have to worry about input, you just have to complete the function countDistinctSubstring().

// Constraints:
// 1 ≤ T ≤ 10
// 1 ≤ N ≤ 1000

// Example(To be used only for expected output):
// Input:
// 2
// ab
// ababa

// Output:
// 4
// 10

// Exaplanation:
// Testcase 1: For the given string "ab" the total distinct substrings are: "", "a", "b", "ab".





// Code:
// class Trie{
//     public:
//     unordered_map<char,Trie*> link;
//     Trie(){
      
//     }
// };
// int countDistinctSubstring(string s) {
//     // Your code here
//     Trie* root=new Trie();
    
    
//     int count=0;
//     for(int i=0;i<s.size();i++){
//         Trie* node=root;
//         for(int j=i;j<s.size();j++){
//             if(node->link.find(s[j])==node->link.end()){
//                 node->link[s[j]]=new Trie();
//                 count++;
//             }
//             node=node->link[s[j]];
//         }
//     }
//     return count+1;
// }


// learning:
//  it adds based upon the variable starting index for each substring possible and if at particular
//  node already have that link means it  is repeating that why adds  when the nodes dont have that char