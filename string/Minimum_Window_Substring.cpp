// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

// The testcases will be generated such that the answer is unique.







// bool check(map<char,int> &mp,map<char,int> &mp1){
//     for(auto i:mp1){
//         if(mp[i.first]<i.second)return false;
//     }
//     return true;
//   }



//    bool isValid(string s,int mid,string t,string &temp){
//          int i=0,j=0;
//          map<char,int> mp,mp1;
//          for(auto i: t)mp1[i]++;
//          while(j<s.size()){
//             mp[s[j]]++;
//             if((j-i+1)==mid && check(mp,mp1)){
//                 temp=s.substr(i,mid);
//                 return true;
//             }else if((j-i+1)==mid && !check(mp,mp1)){
//                 mp[s[i]]--;
//                 if(mp[s[i]]==0)mp.erase(s[i]);
//                 i++;
//             }
//             j++;
//          }
//          return false;
//    }

//     string minWindow(string s, string t) {
//         int l=t.size();
//         int r=s.size();
//        string temp="";
//        string ans="";
//         while(l<=r){
//             int mid=l+(r-l)/2;
//             if(isValid(s,mid,t,temp)){
//                 ans=temp;
//                 r=mid-1;
//             }
//             else l=mid+1;

//         }
//         return ans;
//     }
// };