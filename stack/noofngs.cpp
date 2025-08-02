//  vector<int> count_NGE(int n, vector<int> &arr, int queries, vector<int> &indices) {
//         // write your code here
//         stack<int> st,st1;
//         vector<int> ans(n,0);
//         for(int i=arr.size()-1;i>=0;i--){
//             while(!st.empty() && arr[i]>=st.top()){
//                 st1.push(st.top());
//                 st.pop();
//             }
//             st1.push(arr[i]);
//             ans[i]=st.size();
            
//             while(!st1.empty()){
//                 st.push(st1.top());
//                 st1.pop();
//             }
//         }
//         vector<int> res;
//         for(auto i:indices){
//             res.push_back(ans[i]);
//         }
//         return res;
//     }