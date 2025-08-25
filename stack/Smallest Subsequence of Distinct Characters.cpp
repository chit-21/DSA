// Given a string s, return the lexicographically smallest subsequence of s that contains all the distinct characters of s exactly once.

 

// class Solution {
// public:
//     string smallestSubsequence(string s) {
//          unordered_map<char, int> mp;
//         vector<bool> v(26, false);
//         string res = "";

//         for (int i = 0; i < s.length(); i++) {
//             mp[s[i]] = i;
//         }

//         for (int i = 0; i < s.length(); i++) {
//             if (v[s[i] - 'a']) continue;

//             while (!res.empty() && res.back() > s[i] && mp[res.back()] > i) {
//                 v[res.back() - 'a'] = false;
//                 res.pop_back();
//             }

//             res.push_back(s[i]);
//             v[s[i] - 'a'] = true;
//         }

//         return res;
//     }
// };