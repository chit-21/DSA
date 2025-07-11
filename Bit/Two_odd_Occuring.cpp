// Given an unsorted array, arr[] of positive numbers that contains even number of occurrences for all numbers except two numbers. Return that two numbers in decreasing order which has odd occurrences.

// Examples:

// Input: arr = [4, 2, 4, 5, 2, 3, 3, 1]
// Output: [5, 1] 
// Explanation: 5 and 1 have odd occurrences.


// firstly traverse through the array find xor of two odd occuring numbers then find right most differentiationg didgit in it 
// and then keep looking for the array element which has that bit set and xor with the result and store in a variable.
// return the two variables.


// code
// vector<int> twoOddNum(vector<int>& arr) {
//         // code here
//         int n1=0,n2=0;
//         long long int x=0;
//         for(int i=0;i<arr.size();i++)x^=arr[i];
        
//         int right= (x^(x-1)) & x;
        
//         for(int i=0;i<arr.size();i++){
//             if(arr[i] & right)n1^=arr[i];
//             else n2^=arr[i];
//         }
//          if(n2>n1) return {n2,n1};
//         else return {n1,n2};
//     }