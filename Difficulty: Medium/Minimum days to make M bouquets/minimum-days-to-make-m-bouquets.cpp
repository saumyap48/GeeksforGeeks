//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  bool possible(vector<int>&nums ,int day,int m,int k){
  int n=nums.size();
  int count=0;
  int noofB=0;
  for(int i=0; i<n; i++)
{
  if(nums[i]<=day){
    count++;
  }
  else{
    noofB+=(count/k);
    count=0;
  }
}
noofB+=(count/k);
return noofB>=m;
}
    int minDaysBloom(int m, int k, vector<int> &nums) {
         long long value=m*1ll *k*1ll;
      int n=nums.size();
     if(value>n) return -1;
     int mini=INT_MAX,maxi=INT_MIN;
     for(int i=0; i<n; i++){
      mini=min(mini,nums[i]);
      maxi=max(maxi,nums[i]);
     }
     int left=mini,right=maxi,answer=-1;
     while(left<=right){
      int mid=left+(right-left)/2;
      if(possible(nums,mid,m,k)){
        answer=mid;
        right=mid-1;
      }else{
        left=mid+1;
      }
     }
     return answer;
  }
};


//{ Driver Code Starts.
int main() {
    string str;
    getline(cin, str);
    int t = stoi(str);
    while (t--) {
        getline(cin, str);
        stringstream ss(str);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        getline(cin, str);
        int m = stoi(str);
        getline(cin, str);
        int k = stoi(str);
        Solution obj;
        cout << obj.minDaysBloom(m, k, arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends