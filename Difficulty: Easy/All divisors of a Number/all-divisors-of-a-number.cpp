//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    void print_divisors(int n) {
        vector<int>answer;
     for(int i=1; i<=n; i++){
       if(n%i==0){
        answer.push_back(i);
       }
     }
     sort(answer.begin(),answer.end());
     for(auto num:answer){
         cout<<num<<" ";
     }
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
        ob.print_divisors(n);
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends