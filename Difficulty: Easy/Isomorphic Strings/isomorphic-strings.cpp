//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256


// } Driver Code Ends

class Solution {
  public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string &s, string &t) {
        int m1[256]={0},m2[256]={0};
        int n=s.size();
        for(int i=0; i<n; i++){
            if(m1[s[i]]!=m2[t[i]])
            return false;
            m1[s[i]]=i+1;
            m2[t[i]]=i+1;
        }
        return true;
 
    }
};


//{ Driver Code Starts.

// Driver program
int main() {
    int t;
    cin >> t;
    string s1, s2;
    while (t--) {
        cin >> s1;
        cin >> s2;
        Solution obj;
        int r = obj.areIsomorphic(s1, s2);
        if (r) {
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