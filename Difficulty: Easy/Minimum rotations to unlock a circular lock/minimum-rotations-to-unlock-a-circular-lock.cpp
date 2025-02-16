//{ Driver Code Starts
// Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int rotationCount(long long R, long long D)
    {
    int answer=0;
    int first,second;
    while(R){
        first=R%10;
        second=D%10;
        R/=10;
        D/=10;
        answer+=min(abs(first-second),10-abs(first-second));
    }
    return answer;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long R, D;
        cin>>R>>D;
        
        Solution ob;
        cout<<ob.rotationCount(R, D)<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends