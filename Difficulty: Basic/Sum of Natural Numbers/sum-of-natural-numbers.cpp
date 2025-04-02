//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int seriesSum(int n) {
    int sum=0;
    while(n>0){
        sum+=n;
        n--;
    }
    
    return sum;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.seriesSum(n);

        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends