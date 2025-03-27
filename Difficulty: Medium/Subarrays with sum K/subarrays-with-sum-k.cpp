//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int countSubarrays(vector<int> &nums, int k) {
        // code here
        int n = nums.size(); 
        unordered_map<int, int> prefixSumMap;
        int currentPrefixSum = 0, subarrayCount = 0;

       // Setting 0 in the map.
        prefixSumMap[0] = 1; 
        for (int i = 0; i < n; i++) {
            // Add current element to the prefix sum:
            currentPrefixSum += nums[i];

            /*Calculate the value to 
            remove (currentPrefixSum - k)*/
            int sumToRemove = currentPrefixSum - k;

            /* Add the number of subarrays
             with the sum to be removed*/
            subarrayCount += prefixSumMap[sumToRemove];

            /* Update the count of current
            prefix sum in the map*/
            prefixSumMap[currentPrefixSum] += 1;
        }
        return subarrayCount;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.countSubarrays(arr, k);
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends