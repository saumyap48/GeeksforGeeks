//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.size();
        int maxlength=0;
        for(int i=0; i<n; i++){
        vector<int> hash(256,0);
        for(int j=i; j<n; j++){
            if(hash[s[j]]==1)
            break;
            hash[s[j]]=1;
            int length=j-i+1;
            maxlength=max(maxlength,length);
        }

        }
       return maxlength;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends