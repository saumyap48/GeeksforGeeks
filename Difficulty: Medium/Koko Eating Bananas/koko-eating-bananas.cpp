//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   int findMax(vector<int>&v){
    int maxi=INT_MIN;
    int n=v.size();
    for(int i=0; i<n; i++){
        maxi=max(maxi,v[i]);
    }
    return maxi;
  }
  long long calculateTotalHours(vector<int>&v,int hourly){
    long long totalH=0;
    int n=v.size();
    for(int i=0; i<n; i++){
        totalH+=ceil((double)(v[i])/(double)(hourly));
    }
    return totalH;
  }
    int kokoEat(vector<int>& nums, int h) {
     int low=1, high=findMax(nums);
       while(low<=high){
        int mid=(low+high)/2;
        int requiredTime=calculateTotalHours(nums, mid);
        if(requiredTime<=h){
          high=mid-1;
        }else{
          low=mid+1;
        }
       }
       return low;
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
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;

        cout << ob.kokoEat(arr, k);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends