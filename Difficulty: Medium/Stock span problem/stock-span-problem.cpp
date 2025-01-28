//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(vector<int>& arr) {
        int n=arr.size();
        vector<int>answer;
        stack<pair<int,int>>s;
        for(int i=0; i<n; i++){
            if(s.size()==0){
                answer.push_back(-1);
            }
        else if(s.size()>0 && s.top().first>arr[i])
        {
            answer.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first<=arr[i]){
            while(s.size()>0 && s.top().first<=arr[i]){
                s.pop();
            }
            if(s.size()==0){
                answer.push_back(-1);
            }
            else{
                answer.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
        }
        for(int i=0; i<answer.size(); i++){
            answer[i]=i-answer[i];
        }
        return answer;
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