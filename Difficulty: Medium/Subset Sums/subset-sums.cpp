//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
   void print(vector<int>&arr,int index,int n,int sum,vector<int>&ans){
       if(index==n){
           ans.push_back(sum);
           return;
       }
       print(arr,index+1,n,sum,ans);
       print(arr,index+1,n,sum+arr[index],ans);
   }
    vector<int> subsetSums(vector<int>arr, int n) {
        vector<int>ans;
        print(arr,0,arr.size(),0,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends