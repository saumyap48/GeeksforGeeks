//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
    {
        int n=s1.size();
        int m=s2.size();
        
        vector<int>v1(128,-1);
        vector<int>v2(128,-1);
        
        if(n!=m){
            return false;
        }
        
        for(int i=0; i<n; i++){
            if(v1[s1[i]]!=v2[s2[i]]){
                return false;
            }
            v1[s1[i]]=i;
            v2[s2[i]]=i;
        }
        return true;
        
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends