//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n=prices.size();
        int maxcount=0;
        int buyprice=prices[0];
        for(int i=0; i<n; i++){
            if(prices[i]>buyprice){
                maxcount=max(maxcount,prices[i]-buyprice);
            }
            else{
                buyprice=prices[i];
            }
        }
        return maxcount;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> prices;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            prices.push_back(number);
        }

        Solution ob;
        int ans = ob.maximumProfit(prices);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends