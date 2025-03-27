//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
  
   bool linearsearch(vector<int>&nums,int x){
       int n=nums.size();
       for(int i=0; i<n; i++){
           if(nums[i]==x)
           return true;
       }
       return false;
   }

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        if(arr.size()==0){
            return 0;
        }
        int longestlength=1;
        for(int i=0; i<n; i++){
            int x=arr[i];
            int count=1;
            while(linearsearch(arr,x+1)==true){
                x+=1;
                count+=1;
            }
            longestlength=max(longestlength,count);
        }
        return longestlength;
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

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends