//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size();
        int maxi=arr[0],secondLargest=INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i]>maxi){
            secondLargest=maxi;
            maxi=arr[i];
            }
            else if(maxi!=arr[i] && secondLargest<arr[i]){
            secondLargest=arr[i];
            }
        }
    if(secondLargest==INT_MIN){
        return -1;
    }
    else{
        return secondLargest;
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends