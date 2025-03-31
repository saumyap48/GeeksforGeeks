//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int helperfunc(int mid,int n,int m){
  long long answer=1;
  long long base=mid;
  while(n>0){
    if(n%2!=0){
      answer=answer*base;
      if(answer>m) return 2;
      n--;
    }
    else{
      n/=2;
      base=base*base;
      if(base>m) return 2;
    }
  }
  if(answer==m) return 1;
  return 0;
}
    int nthRoot(int N, int M) {
        // Code here.
  int low=1,high=M;
    while(low<=high){
      int mid=low+(high-low)/2;
      int midN=helperfunc(mid,N,M);
      if(midN==1){
        return mid;
      }
      else if(midN==0){
        low=mid+1;
      }
      else{
        high=mid-1;
      }
    }
    return -1;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends