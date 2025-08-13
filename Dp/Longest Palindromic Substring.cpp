// string longestPalindrome(string s) {
//         string t=s;
//         reverse(t.begin(),t.end());
//         int maxi=0;
//         int lastIndex=-1;
//         vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,0));


//         for(int i=1;i<=s.size();i++){
//             for(int j=1;j<=t.size();j++){
//                 if(s[i-1]==t[j-1]){
//                     dp[i][j]=1+dp[i-1][j-1];
//                     int l=i-dp[i][j];
//                     int r=t.size()-j;
//                     if(l==r && maxi<dp[i][j]){
//                         maxi=dp[i][j];
//                         lastIndex=i-1;
//                     }

//                 }else dp[i][j]=0;
//             }
//         }
//         int start=lastIndex-maxi+1;
//         return s.substr(start,maxi);
// }


// space o(n2) time 0(n2)



// can also expand around center 
// class Solution {
// public:
//     string longestPalindrome(string s) {
//         if (s.empty()) return "";
        
//         // Step 1: Transform string
//         string t = "^";
//         for (char c : s) {
//             t += "#" + string(1, c);
//         }
//         t += "#$";
        
//         int n = t.size();
//         vector<int> p(n, 0);
//         int center = 0, right = 0;
        
//         // Step 2: Main loop
//         for (int i = 1; i < n - 1; i++) {
//             int mirror = 2 * center - i; // mirror position of i
            
//             if (i < right)
//                 p[i] = min(right - i, p[mirror]);
            
//             // Expand around center i
//             while (t[i + 1 + p[i]] == t[i - 1 - p[i]]) {
//                 p[i]++;
//             }
            
//             // Update center and right if expanded beyond right
//             if (i + p[i] > right) {
//                 center = i;
//                 right = i + p[i];
//             }
//         }
        
//         // Step 3: Find max palindrome length and center
//         int maxLen = 0, centerIndex = 0;
//         for (int i = 1; i < n - 1; i++) {
//             if (p[i] > maxLen) {
//                 maxLen = p[i];
//                 centerIndex = i;
//             }
//         }
        
//         // Step 4: Map back to original string
//         int start = (centerIndex - maxLen) / 2; // remove '#' effect
//         return s.substr(start, maxLen);
//     }
// };
