//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void rev(string &s, int left, int right) {
        if (left >= right) return;
        swap(s[left], s[right]);
        rev(s, left + 1, right - 1);
    }

    string revStr(string s) {
        rev(s, 0, s.size() - 1);
        return s;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.revStr(s) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends