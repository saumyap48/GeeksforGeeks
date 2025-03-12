//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& nums) {
    int n=nums.size();
      vector<int>answer;
      if(nums.empty()){
        return answer;
      }
      int maxi=nums[n-1];
      answer.push_back(nums[n-1]);
      for(int i=n-2; i>=0; i--){
        if(nums[i]>=maxi){
            answer.push_back(nums[i]);
            maxi=nums[i];
        }
      }
      reverse(answer.begin(),answer.end());
      return answer;
    }
};


//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after the integer input
    while (t--) {
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.leaders(a);

        // Print the result in the required format
        if (result.empty()) {
            cout << "[]"; // Print empty brackets if no leaders are found
        } else {
            for (int i = 0; i < result.size(); i++) {
                if (i != 0)
                    cout << " ";
                cout << result[i];
            }
        }
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends