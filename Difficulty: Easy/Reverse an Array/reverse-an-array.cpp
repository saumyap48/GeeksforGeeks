//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
void r(int i,vector<int>&arr,int n){
        n=arr.size();
        if(i>=n/2){
            return;
        }
        else{
            swap(arr[i],arr[n-i-1]);
            r(i+1,arr,n);
        }
    }
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        r(0,arr,n);
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
        ob.reverseArray(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends