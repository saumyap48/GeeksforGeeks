//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
           int n=arr.size();
           for(int i=n-2; i>=0; i--){
               bool swapped=0;
               for(int j=0; j<=i; j++){
                   if(arr[j]>arr[j+1]){
                     swapped=1;
                     swap(arr[j],arr[j+1]);
                   }
               }
                 if(swapped==0)
                 break;
           }
    }
};


//{ Driver Code Starts.

// Driver program to test above functions
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

        ob.bubbleSort(arr);
        for (int e : arr) {
            cout << e << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends