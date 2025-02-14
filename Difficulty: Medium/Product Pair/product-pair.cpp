//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
          int n=arr.size();
        int start=0,end=n-1;
        sort(arr.begin(),arr.end());
        while(start<end){
            long long product = 1LL * arr[start] * arr[end];
            if(product==x)
            return true;
            else if(product<x)
            start++;
            else
            end--;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        long long x;
        cin >> x;
        cin.ignore(); // To discard any leftover newline characters

        Solution ob;
        auto ans = ob.isProduct(arr, x);
        cout << (ans ? "true\n" : "false\n");
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends