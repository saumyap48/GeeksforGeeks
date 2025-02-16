//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
    int currency[]={2000,500,200,100,50,20,10,5,2,1};
    int notes=0,i=0;
    vector<int>answer;
    while(N){
        notes=N/currency[i];
        while(notes--){
            answer.push_back(currency[i]);
        }
        N%=currency[i];
        i++;
    }
    return answer;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends