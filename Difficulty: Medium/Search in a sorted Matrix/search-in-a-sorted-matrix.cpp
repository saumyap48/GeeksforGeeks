//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
   bool binarySearch(vector<int>&nums,int target){
  int n=nums.size();
  int low=0,high=n-1;
  while(low<=high){
    int mid=(low+high)/2;
    if(nums[mid]==target )return true;
    else if(target>nums[mid]) low=mid+1;
    else high=mid-1;
  }
  return false;
 }
    // Function to search a given number in row-column sorted matrix.
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        // code here
      int n=matrix.size();
      int m=matrix[0].size();
      for(int i=0; i<n; i++){
        bool flag=binarySearch(matrix[i],target);
        if(flag) return true;
      }
      return false;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends