//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findSubString(string& str) {
        unordered_set<char>UniqueChars;
        for(int i=0; i<str.length(); i++){
            UniqueChars.insert(str[i]);
        }
        int distinctCount=UniqueChars.size();
        if(str.length()<=distinctCount){
            return str.length();
        }
        int freq[256]={0};
        int left=0, minLength=INT_MAX, found=0;
        for(int right=0; right<str.length(); right++){
            char curr=str[right];
            if(freq[curr]==0) found++;
            freq[curr]++;
        while(found==distinctCount){
            minLength=min(minLength,right-left+1);
            char leftchar=str[left];
            freq[leftchar]--;
            if(freq[leftchar]==0)found--;
            left++;
        }
        }
        return minLength;
    }
};


//{ Driver Code Starts.
//      Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends