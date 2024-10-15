//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
         vector<int> ans;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        unordered_map<int,int> mp3;
        
        for(auto i : arr1)
        {
            mp1[i]++;
        }
        
        for(auto j : arr2)
        {
            mp2[j]++;
        }
        
        for(auto k : arr3)
        {
            mp3[k]++;
        }
        
        for(auto &pair : mp1)
        {
            int key = pair.first;
            if(mp2.find(key) != mp2.end() && mp3.find(key) != mp3.end())
            {
                ans.push_back(key);
            }
        }
        
        if (ans.empty()) 
        {
        return {-1};
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
           }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends