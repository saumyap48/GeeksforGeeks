//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<long> NearestSmallLeft(vector<int>& arr) {
        int n = arr.size();
        vector<long> left;
        stack<pair<int, int>> s;
        int pseudoindex = -1;

        for (int i = 0; i < n; i++) {
            if (s.size() == 0) {
                left.push_back(pseudoindex);
            }
            else if (s.size() > 0 && s.top().first < arr[i]) {
                left.push_back(s.top().second);
            }
            else if (s.size() > 0 && s.top().first >= arr[i]) {
                while (s.size() > 0 && s.top().first >= arr[i]) {
                    s.pop();
                }
                if (s.size() == 0) {
                    left.push_back(pseudoindex);
                } else {
                    left.push_back(s.top().second);
                }
            }
            s.push({arr[i], i});
        }
        return left;
    }

    vector<long> NearestSmallRight(vector<int>& arr) {
        int n = arr.size();
        vector<long> right;
        stack<pair<int, int>> s;
        int pseudoindex = n;

        for (int i = n - 1; i >= 0; i--) {
            if (s.size() == 0) {
                right.push_back(pseudoindex);
            }
            else if (s.size() > 0 && s.top().first < arr[i]) {
                right.push_back(s.top().second);
            }
            else if (s.size() > 0 && s.top().first >= arr[i]) {
                while (s.size() > 0 && s.top().first >= arr[i]) {
                    s.pop();
                }
                if (s.size() == 0) {
                    right.push_back(pseudoindex);
                } else {
                    right.push_back(s.top().second);
                }
            }
            s.push({arr[i], i});
        }
        reverse(right.begin(), right.end());
        return right;
    }

    int getMaxArea(vector<int>& arr) {
        int n = arr.size();
        vector<long> NSL = NearestSmallLeft(arr);
        vector<long> NSR = NearestSmallRight(arr);
        long long maxArea = 0;

        for (int i = 0; i < n; i++) {
            maxArea = max(maxArea, (long long)arr[i] * (NSR[i] - NSL[i] - 1));
        }
        return maxArea;
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
        Solution obj;
        int res = obj.getMaxArea(arr);
        cout << res << endl;
        cout << "~" << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends