//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int minRow(vector<vector<int>> &mat) {
        // code here
              int m = mat.size();
        int n = mat[0].size();
        
        int minCount = INT_MAX;  // Track minimum 1's count
        int index = 0;           // Store row index
        
        for (int i = 0; i < m; i++) {  // Iterate over rows
            int count = 0;
            
            for (int j = 0; j < n; j++) {  // Count 1s in row
                if (mat[i][j] == 1) count++;
            }
            
            // Update if a row with fewer 1s is found
            if (count < minCount) {
                minCount = count;
                index = i;
            }
        }
        
        return index + 1;  // Return 1-based index
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> mat(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(mat) << "\n";
        cout << "~\n";
    }
}
// } Driver Code Ends