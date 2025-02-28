//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
            int original1=n;
    int original=n;
     int count=0;
       while(n>0){
       count++;
       n=n/10;
     }
     int digit=0;
     int answer=0;
     while(original>0){
        digit=original%10;
        original=original/10;
    answer+=pow(digit,count);
     }
     if(answer==original1){
     return true;
     }
     else
     return false;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends