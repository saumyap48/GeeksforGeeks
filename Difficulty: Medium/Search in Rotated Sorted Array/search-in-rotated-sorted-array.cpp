//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int search(vector<int>& nums, int target) {
        // Code Here
         int n = nums.size();

        // Loop through the array to find the target element
        for (int i = 0; i < n; i++) {
            // Check if the current element is the target
            if (nums[i] == target)
                // Return the index if the target is found
                return i;
        }

        // Return -1 if the target is not found
        return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends