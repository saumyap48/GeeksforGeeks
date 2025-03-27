//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& nums) {
     int n=nums.size();
        if(n==0) return 0;
     int longest=1;
     unordered_set<int>st;
     for(int i=0; i<n; i++){
        st.insert(nums[i]);
     }
     for(auto it: st){
        if(st.find(it-1)==st.end()){
            int count=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                count=count+1;
            }
            longest=max(longest,count);
        }
     }
     return longest;
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