//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int gcd(int n1, int n2) {
        while(n1 > 0 && n2 > 0) {

            if(n1 > n2) {
                n1 = n1 % n2;
            }
            
            else {
                n2 = n2 % n1;
            }
        }
        if(n1 == 0) return n2;
    
        return n1;

    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.gcd(a, b);
        
        cout<<res<<endl;
        
    
cout << "~" << "\n";
}
}

// } Driver Code Ends