//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        vector<int>answer;
       int m=mat.size();
       int n=mat[0].size();
       int totalcount=m*n;
       int minr=0;
       int maxr=m-1;
       int minc=0;
       int maxc=n-1;
       int count=0;
       while(count<totalcount){
        for(int i=minc; i<=maxc && count<totalcount; i++){
        answer.push_back(mat[minr][i]);
        count++;
        }
        minr++;
        for(int i=minr; i<=maxr&& count<totalcount; i++){
        answer.push_back(mat[i][maxc]);
        count++;
        }
        maxc--;
        for(int i=maxc; i>=minc&& count<totalcount; i--){
        answer.push_back(mat[maxr][i]);
        count++;
        }
       maxr--;
       for(int i=maxr; i>=minr&& count<totalcount; i--){
        answer.push_back(mat[i][minc]);
        count++;
        }
        minc++;
       }
       return answer;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends