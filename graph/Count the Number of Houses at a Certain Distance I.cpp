// You are given three positive integers n, x, and y.

// In a city, there exist houses numbered 1 to n connected by n streets. There is a street connecting the house numbered i with the house numbered i + 1 for all 1 <= i <= n - 1 . An additional street connects the house numbered x with the house numbered y.

// For each k, such that 1 <= k <= n, you need to find the number of pairs of houses (house1, house2) such that the minimum number of streets that need to be traveled to reach house2 from house1 is k.

// Return a 1-indexed array result of length n where result[k] represents the total number of pairs of houses such that the minimum streets required to reach one house from the other is k.

// Note that x and y can be equal.


// vector<int> countOfPairs(int n, int x, int y) {
//         vector<vector<int>> grid(n+1, vector<int>(n+1, 1000));
        
//         for(int j = 1; j < n; j++) {
//             grid[j][j+1] = 1;
//             grid[j+1][j] = 1;
//         }
//         grid[x][y] = 1;
//         grid[y][x] = 1;
        
//         for(int k = 1; k <= n; k++) {
//             for(int i = 1; i <= n; i++) {
//                 for(int j = 1; j <= n; j++) {              
//                    grid[i][j] = min(grid[i][j], grid[i][k] + grid[k][j]);                
//                 }
//             }
//         }
        
//         vector<int> result(n);
//         for(int i = 1; i <= n; i++) {
//             for(int j = 1; j <= n; j++) {

//                 if(i != j) {
//                     int val = grid[i][j];
//                     result[val-1]++;
//                 }

//             }
//         }
        
//         return result;
        
//     }