//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int n=arr.size();
        int Maxi=INT_MIN;
        int SecondLargest=INT_MIN;
        int ThirdLargest=INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i]>=Maxi){
                ThirdLargest=SecondLargest;
                SecondLargest=Maxi;
                Maxi=arr[i];
            }
           else if(Maxi>=arr[i] && SecondLargest<=arr[i]){
                ThirdLargest=SecondLargest;
                SecondLargest=arr[i];
            }
            else if(arr[i]<=SecondLargest && ThirdLargest<=arr[i]){
                ThirdLargest=arr[i];
            }
        }
        if(ThirdLargest==INT_MIN){
            return -1;
        }
        else {
            return ThirdLargest;
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
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.thirdLargest(arr) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends