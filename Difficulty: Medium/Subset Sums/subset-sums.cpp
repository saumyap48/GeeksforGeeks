class Solution {
public:
    void func(int ind, int sum, vector<int>& arr, int N, vector<int>& ans) {
        if(ind == N) {
            ans.push_back(sum);
            return;
        }
        
        // pick
        func(ind + 1, sum + arr[ind], arr, N, ans);
        
        // not pick
        func(ind + 1, sum, arr, N, ans);
    }

    vector<int> subsetSums(vector<int>& arr) {
        int N = arr.size();
        vector<int> ans;
        
        func(0, 0, arr, N, ans);
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};