//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>nums, int n, int target)
    {
        int low=0,high=n-1;
        int answer=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
            answer=mid;
            high=mid-1;
            }
            else
            low=mid+1;
        }
        return answer;
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends