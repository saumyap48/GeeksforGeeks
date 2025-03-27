//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long subarrayXor(vector<int> &nums, int k) {
        // code here
         int n=nums.size();
        int xr=0;
        map<int,int>mpp;
        mpp[xr]++;
        int count=0;
        for(int i=0; i<n; i++){
             xr=xr^nums[i];
             int x=xr^k;
            count+=mpp[x];
            mpp[xr]++;
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input); // Read the whole line for the array

        stringstream ss(input);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num); // Push numbers into the vector
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after k

        Solution obj;
        cout << obj.subarrayXor(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends