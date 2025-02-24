//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        int original=n;
        int answer=0;
        int temp=0;
        while(n>0){
            temp=n%10;
            answer=answer*10+temp;
            n=n/10;
        }
        if(answer==original){
            return true;
        }
        else
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        bool ans = ob.isPalindrome(n);
        cout << (ans ? "true" : "false") << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends