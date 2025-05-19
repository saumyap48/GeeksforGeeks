//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_set<char>unique_char(s.begin(),s.end());
        if(unique_char.size()<k){
            return -1;
        }
        int maxlength=0;
        int l=0,r=0;
        unordered_map<char,int>mp;
        while(r<s.size()){
            mp[s[r]]++;
        while(mp.size()>k){
            mp[s[l]]--;
            if(mp[s[l]]==0){
                mp.erase(s[l]);
            }
            l++;
        }
        if(mp.size()<=k){
            maxlength=max(maxlength,r-l+1);
        }
        r++;
        }
        return maxlength;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends