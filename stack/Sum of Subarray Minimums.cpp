// nt mod=1e9+7;
//     int sumSubarrayMins(vector<int>& arr) {
//         int n = arr.size();
//     vector<int> left(n), right(n);
//     stack<int> st;

//     // Find Previous Less Element index (strictly less)
//     for (int i = 0; i < n; ++i) {
//         while (!st.empty() && arr[st.top()] > arr[i])
//             st.pop();

//         left[i] = st.empty() ? -1 : st.top();
//         st.push(i);
//     }

//     // Clear the stack for reuse
//     while (!st.empty()) st.pop();

//     // Find Next Less Element index (less than or equal to for strict decreasing)
//     for (int i = n - 1; i >= 0; --i) {
//         while (!st.empty() && arr[st.top()] >= arr[i])
//             st.pop();

//         right[i] = st.empty() ? n : st.top();
//         st.push(i);
//     }

//     long long res = 0;
//     for (int i = 0; i < n; ++i) {
//         long long l = i - left[i];
//         long long r = right[i] - i;
//         res = (res + (arr[i] * l % mod) * r % mod) % mod;
//     }

//     return res;

//     }