//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int findOnce(vector<int>& nums) {
        int n=nums.size();
        // code here.
     if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int low=1,high=n-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]!=nums[mid+1] &&nums[mid]!=nums[mid-1]){
                return nums[mid];
            }
            if((mid%2==1 &&nums[mid]==nums[mid-1])|| (mid%2==0 &&nums[mid]==nums[mid+1])){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        int ans = ob.findOnce(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends