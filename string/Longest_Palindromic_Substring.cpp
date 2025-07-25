// Given a string s, return the longest palindromic substring in s.

    // string longestPalindrome(string s) {
    //     string t=s;
    //     reverse(t.begin(),t.end());
    //     int maxi=0;
    //     int lastIndex=-1;
    //     vector<vector<int>> dp(s.size()+1,vector<int>(t.size()+1,0));


    //     for(int i=1;i<=s.size();i++){
    //         for(int j=1;j<=t.size();j++){
    //             if(s[i-1]==t[j-1]){
    //                 dp[i][j]=1+dp[i-1][j-1];
    //                 int orig_start = i - dp[i][j];
    //                 int rev_start = s.size() - j;
    //                  if (orig_start == rev_start && dp[i][j] > maxi) {
    //                     maxi = dp[i][j];
    //                     lastIndex = i - 1;
    //                 }


    //             }else dp[i][j]=0;
    //         }
    //     }
    //     return s.substr(lastIndex-maxi+1,maxi);
    // }