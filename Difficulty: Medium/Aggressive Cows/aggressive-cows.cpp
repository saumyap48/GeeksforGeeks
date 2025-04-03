//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
       bool CanWePlace(vector<int>&nums,int distance,int cows){
        int n=nums.size();
        int countCows=1;
        int last=nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]-last>=distance){
                countCows++;
                last=nums[i]; 
            }
            if(countCows>=cows) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &nums, int cows) {
           int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=1,high=nums[n-1]-nums[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(CanWePlace(nums,mid,cows)==true){
            low=mid+1;
            }
            else
            high=mid-1;
        }
        return  high;
    }
};
   

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends