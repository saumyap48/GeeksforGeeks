//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isParenthesisBalanced(string& s) {
        int n=s.length();
        stack<char>st;
        for(int i=0; i<n; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else{
                if(st.empty())
                return 0;
                
                else if(s[i]==')'){
                   if(st.top()!='(')
                   return 0;
                   else
                   st.pop();
                }
                else if(s[i]=='}'){
                   if(st.top()!='{')
                   return 0;
                   else
                   st.pop();
                }
                else if(s[i]==']'){
                   if(st.top()!='[')
                   return 0;
                   else
                   st.pop();
                }
            }
        }
        return st.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isParenthesisBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends