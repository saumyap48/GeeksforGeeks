//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int search(vector<int>& nums, int target) {
        // Code Here
     int n=nums.size();
     int low=0,high=n-1;
       while(low<=high){
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return mid;
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && target<= nums[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            }
            else{
                if(nums[mid]<=target && target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }
     return -1;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends