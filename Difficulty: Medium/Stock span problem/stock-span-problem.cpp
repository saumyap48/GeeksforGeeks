//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(vector<int>& arr) {
        int n=arr.size();
        // write code here
        vector<int>ans(n);
        stack<int>s;
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && arr[i]>arr[s.top()]){
                ans[s.top()]=s.top()-i;
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty()){
            ans[s.top()]=s.top()+1;
            s.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.calculateSpan(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends