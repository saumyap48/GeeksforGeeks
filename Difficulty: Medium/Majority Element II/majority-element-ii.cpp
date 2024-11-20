//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        int count = 1; 
        vector<int> temp;
        
        sort(arr.begin(), arr.end()); 
        
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && arr[i] == arr[i + 1]) {
                count++;
            } 
            if (i == n - 1 || arr[i] != arr[i + 1]) {
                if (count > n / 3) {
                    temp.push_back(arr[i]); 
                }
                count = 1;
            }
        }
        
        return temp;
    }
};















//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends