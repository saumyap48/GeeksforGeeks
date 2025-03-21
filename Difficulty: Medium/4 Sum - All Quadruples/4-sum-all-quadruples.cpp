//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    // arr[] : int input array of integers
    // target : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &nums, int target) {
          vector<vector<int>>answer;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            for(int j=i+1; j<n; j++){
                if(j>i+1 &&nums[j]==nums[j-1])
                continue;
                int start=j+1;
                int end=n-1;
                while(start<end){
                    long long totalsum=(long long)nums[i]+nums[j]+nums[start]+nums[end];
                    if(totalsum==target){
                        vector<int>temp={nums[i],nums[j],nums[start],nums[end]};
                        answer.push_back(temp);
                        start++;
                        end--;
                       while(start<end &&nums[start]==nums[start-1])start++;
                       while(start<end && nums[end]==nums[end+1])end--;
                    }
                    else if(totalsum<target){
                        start++;
                    }
                    else{
                        end--;
                    }
                }
            }
        }
        return answer;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(arr, d);
        sort(ans.begin(), ans.end());
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << endl;
        }
        if (ans.empty()) {
            cout << -1 << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends