//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int assignMiceHoles(int N , int M[] , int H[]) {
        sort(M,M+N);
        sort(H,H+N);
        int answer=INT_MIN;
        for(int i=0; i<N; i++)
            answer=max(answer,abs(M[i]-H[i]));
            return answer;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        
        int M[N],H[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>M[i];
        for(int i=0 ; i<N ; i++)
            cin>>H[i];

        Solution ob;
        cout << ob.assignMiceHoles(N,M,H) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends