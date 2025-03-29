//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User code template

class Solution {
  public:
    int findfloor(vector<int>&nums,int n,int x){
        int low=0,high=n-1;
        int answer=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=x){
                answer=nums[mid];
                low=mid+1;
            }
            else
            high=mid-1;
        }
        return answer;
    }
     int findceil(vector<int>&nums,int n,int x){
        int low=0,high=n-1;
        int answer=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=x){
                answer=nums[mid];
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return answer;
    }
    vector<int> getFloorAndCeil(int x, vector<int> &nums) {
        // code here
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int floor=findfloor(nums,n,x);
        int ceil=findceil(nums,n,x);
        return{floor,ceil};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends