//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
     int firstoccurence(vector<int>&nums,int target){
         int n=nums.size();
         int low=0,high=n-1;
         int answer=-1;
         while(low<=high){
             int mid=low+(high-low)/2;
             if(nums[mid]==target){
                 answer=mid;
                 high=mid-1;
             }
             else if(nums[mid]>target){
                 high=mid-1;
             }
             else{
                 low=mid+1;
             }
         }
         return answer;
     }
       int lastoccurence(vector<int>&nums,int target){
         int n=nums.size();
         int low=0,high=n-1;
         int answer=-1;
         while(low<=high){
             int mid=low+(high-low)/2;
             if(nums[mid]==target){
                 answer=mid;
                 low=mid+1;
             }
             else if(nums[mid]>target){
                 high=mid-1;
             }
             else{
                 low=mid+1;
             }
         }
         return answer;
     }
 
    vector<int> find(vector<int>& nums, int x) {
    int n=nums.size();
    int first=firstoccurence(nums,x);
    if(first==-1) return{-1,-1};
    int last=lastoccurence(nums,x);
      return{first,last};
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends