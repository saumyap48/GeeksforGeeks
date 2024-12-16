//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  void segregateElements(vector<int>& arr) {
     vector<int> positive, negative;
    
    // Traverse the array and segregate positive and negative numbers
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 0) {
            positive.push_back(arr[i]); // Store positive numbers
        } else {
            negative.push_back(arr[i]); // Store negative numbers
        }
    }
    
    // Now we combine the positive and negative numbers
    positive.insert(positive.end(), negative.begin(), negative.end());
    
    // Copy back to the original array
    arr = positive;

    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << "\n~\n";
    }
}
// } Driver Code Ends