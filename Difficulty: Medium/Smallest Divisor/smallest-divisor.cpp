//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
   int sumByD(vector<int>& nums, int limit) {
        // Size of array
        int n = nums.size(); 
        
        // Find the summation of division values
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += ceil((double)(nums[i]) / (double)(limit));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int limit) {
        int n = nums.size();
        if (n > limit) return -1;
        
        // Initialize binary search bounds
        int low = 1, high = *max_element(nums.begin(), nums.end());

        // Apply binary search
        while (low <= high) {
            int mid = (low + high) / 2;
            if (sumByD(nums, mid) <= limit) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
   



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.smallestDivisor(arr, d);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends