// class Solution {
// public:
//     int kthSmallest(vector<vector<int>>& matrix, int k) {
//         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
//         int n=matrix.size();
//         for(int i=0;i<n;i++){
//             pq.push({matrix[i][0],{i,0}});
//         }
//         int ans=0;
//         for(int i=0;i<k;i++){
//             auto top=pq.top();
//             pq.pop();
//             ans=top.first;
//             if(top.second.second+1<n)pq.push({matrix[top.second.first][top.second.second+1],{top.second.first,top.second.second+1}});
//         }
//         return ans;
//     }
// };