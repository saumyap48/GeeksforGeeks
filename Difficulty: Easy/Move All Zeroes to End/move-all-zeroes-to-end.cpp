//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int n=arr.size();
        int countarr=0;
       for(int i=0; i<n; i++){
           if(arr[i]!=0){
           arr[countarr]=arr[i];
           countarr++;
           }
           
       }
       while(countarr<n){
           arr[countarr]=0;
           countarr++;
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
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends