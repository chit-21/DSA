// You are given an integer n and a 2D integer array queries.

// There are n cities numbered from 0 to n - 1. Initially, there is a unidirectional road from city i to city i + 1 for all 0 <= i < n - 1.

// queries[i] = [ui, vi] represents the addition of a new unidirectional road from city ui to city vi. After each query, you need to find the length of the shortest path from city 0 to city n - 1.

// There are no two queries such that queries[i][0] < queries[j][0] < queries[i][1] < queries[j][1].

// Return an array answer where for each i in the range [0, queries.length - 1], answer[i] is the length of the shortest path from city 0 to city n - 1 after processing the first i + 1 queries.

//  class Solution {
// public:
//     vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
//         vector<int>ans;
//         set<int>cities;
//         for(int i=0;i<n;i++){
//             cities.insert(i);
//         }
//         for(int i=0;i<queries.size();i++){
//             auto lo = cities.lower_bound(queries[i][0]+1);
//             auto hi = cities.lower_bound(queries[i][1]);
//             cities.erase(lo,hi);
//             ans.push_back(cities.size()-1);
//         }
//         return ans;
//     }
// };