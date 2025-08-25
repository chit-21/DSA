// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         vector<int> prev(heights.size(),-1);
//         vector<int> next(heights.size(),heights.size());


//         stack<int> st,st1;

//         for(int i=0;i<heights.size();i++){
//             while(!st.empty() && heights[st.top()]>=heights[i])st.pop();
//             if(!st.empty())prev[i]=st.top();
//             st.push(i);
//         }
//         for(int i=heights.size()-1;i>=0;i--){
//             while(!st1.empty() && heights[st1.top()]>=heights[i])st1.pop();
//             if(!st1.empty())next[i]=st1.top();
//             st1.push(i);
//         }
        

//         int maxi=0;
//         for(int i=0;i<heights.size();i++){
//             int left=prev[i];
//             int right=next[i];
//             maxi=max(maxi,(right-left-1)*heights[i]);
//         }
//         return maxi;
//     }
// };