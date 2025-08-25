// class Solution {
// public:

//     int solve(vector<int> &heights){
//         vector<int> prev(heights.size(),-1);
//         vector<int> next(heights.size(),heights.size());
//         stack<int> st1,st2;


//         for(int i=0;i<heights.size();i++){
//             while(!st1.empty() && heights[st1.top()]>=heights[i])st1.pop();
//             if(!st1.empty())prev[i]=st1.top();
//             st1.push(i);
//         }

//         for(int i=heights.size()-1;i>=0;i--){
//             while(!st2.empty() && heights[st2.top()]>=heights[i])st2.pop();
//             if(!st2.empty())next[i]=st2.top();
//             st2.push(i);
//         }

//         int maxi=0;
//         for(int i=0;i<heights.size();i++){
//             int l=prev[i];
//             int r=next[i];
//             maxi=max(maxi,(r-l-1)*heights[i]);
//         }
//         return maxi;
//     }





//     int maximalRectangle(vector<vector<char>>& matrix) {
//         int n=matrix.size();
//         int m=matrix[0].size();
//         vector<int> heights(m,0);
//         int maxi=0;
//          for (const auto& row : matrix) {
//             for (int i = 0; i < m; i++) {
//                 heights[i] = (row[i] == '1') ? heights[i] + 1 : 0;
//             }
//             maxi=max(maxi,solve(heights));
//         }
//         return maxi;
//     }
// };