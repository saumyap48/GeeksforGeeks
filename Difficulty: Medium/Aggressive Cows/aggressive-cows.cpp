//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:

    int aggressiveCows(vector<int> &stalls, int k) {

    int n=stalls.size();
    int start=1,end,mid,answer;
    sort(stalls.begin(),stalls.end());
    end=stalls[n-1]-stalls[0];
    while(start<=end){
        mid=start+(end-start)/2;
        int count=1,position=stalls[0];
        for(int i=0; i<n; i++){
            if(position+mid<=stalls[i]){
                count++;
                position=stalls[i];
            }
        }
        if(count<k){
        end=mid-1;
        }
        else{
            answer=mid;
            start=mid+1;
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