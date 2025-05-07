//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxChildren(vector<int> &Student, vector<int> &Cookie) {
       int l=0;
        int r=0;
        sort(Student.begin(),Student.end());
        sort(Cookie.begin(),Cookie.end());
        while(l<Student.size() && r<Cookie.size()){
            if(Cookie[r]>=Student[l]){
                l++;
            }
            r++;
        }
        return l;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        vector<int> greed;
        int num;
        while (ss >> num)
            greed.push_back(num);
        getline(cin, input);
        ss.clear();
        vector<int> cookie;
        ss.str(input);
        while (ss >> num)
            cookie.push_back(num);

        Solution obj;
        cout << obj.maxChildren(greed, cookie) << endl;
        cout << "~\n";
    }
    return 0;
}
// } Driver Code Ends