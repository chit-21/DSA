// Given an array of positive integers arr. Find the maximum sum subsequence of the given array such that the integers in the subsequence are sorted in strictly increasing order i.e. a strictly increasing subsequence. 

// Examples:

// Input: arr[] = [1, 101, 2, 3, 100]
// Output: 106
// Explanation: The maximum sum of a increasing sequence is obtained from [1, 2, 3, 100].



//  can use concept of LIS alongside storing sum  of LIS obatined and later extarct the maximum sum 


// code


// int maxSumIS(vector<int>& arr) {
//         // Your code goes here
//         vector<int> sum=arr;
        
//         int n=arr.size();
//            int maxSum = arr[0];

//     for (int i = 1; i < n; ++i) {
//         for (int j = 0; j < i; ++j) {
//             if (arr[i] > arr[j] && sum[i] < sum[j] + arr[i]) {
//                 sum[i] = sum[j] + arr[i];
//             }
//         }
//         maxSum = max(maxSum, sum[i]);
//     }

//     return maxSum;
//     }
