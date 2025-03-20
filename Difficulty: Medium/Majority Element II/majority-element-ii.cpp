//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        int n=nums.size();
        vector<int>answer;
        unordered_map<int,int>freq;
        int mini=int(n/3)+1;
        for(int i=0; i<n; i++){
            freq[nums[i]]++;
            if(freq[nums[i]]==mini){
                answer.push_back(nums[i]);
            }
            if(answer.size()==2){
                break;
            }
        }
        sort(answer.begin(),answer.end());
        return answer;
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