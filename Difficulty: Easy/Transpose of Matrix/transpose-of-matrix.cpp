//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find transpose of a matrix.
    void transpose(vector<vector<int>>& mat, int n) {
        // code here
      for(int i=0;i<mat.size();i++){
            for(int j=i+1;j<mat[0].size();j++){
                swap(mat[i][j],mat[j][i]);
            }
      }
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > matrix(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        ob.transpose(matrix, n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                cout << matrix[i][j] << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends