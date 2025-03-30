//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findMin(vector<int>& arr) {
        int n = arr.size();  
        
         // Initialize mini to maximum integer value
        int mini = INT_MAX;   
        for (int i = 0; i < n; i++) {
            
            /* Update mini with the 
            smaller of mini and arr[i]*/
            mini = min(mini, arr[i]);   
        }
        // Return the minimum element found
        return mini;  
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.findMin(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends