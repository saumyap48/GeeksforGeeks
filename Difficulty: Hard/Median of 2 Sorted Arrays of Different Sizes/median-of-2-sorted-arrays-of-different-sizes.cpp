//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int n1=a.size();
        int n2=b.size();
        vector<int>merged;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(a[i]<b[j]){
            merged.push_back(a[i++]);
            }
            else{
            merged.push_back(b[j++]);
            }
        }
        while(i<n1){
        merged.push_back(a[i++]);
        }
         while(j<n2){
        merged.push_back(b[j++]);
        }
        int n=n1+n2;
        if(n%2==1){
        return (double)merged[n/2];
        }
         double median = ((double)merged[n/2] + (double)merged[(n/2) - 1]) / 2.0;
         return median;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after reading `t`

    while (t--) {
        // Read the first array
        string line1;
        getline(cin, line1);
        stringstream ss1(line1);

        vector<int> array1;
        int num;
        while (ss1 >> num) {
            array1.push_back(num);
        }

        // Read the second array
        string line2;
        getline(cin, line2);
        stringstream ss2(line2);

        vector<int> array2;
        while (ss2 >> num) {
            array2.push_back(num);
        }

        // Create a Solution object and calculate the median
        Solution ob;
        if (array2.size() == 1 && array2[0] == 0) {
            array2.pop_back();
        }

        double ans = ob.medianOf2(array1, array2);
        if (ans == (int)ans) {
            cout << (int)ans << endl;
        } else {
            cout << ans << endl;
        }

        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends