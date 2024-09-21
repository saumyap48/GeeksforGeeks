//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
          vector<int> v;
        for(int i=0;i<str.size();i++){
            switch(str[i]){
                case 'I':
                    v.push_back(1);
                    break;
                case 'V':
                    v.push_back(5);
                    break;
                case 'X':
                    v.push_back(10);
                    break;
                case 'L':
                    v.push_back(50);
                    break;
                case 'C':
                    v.push_back(100);
                    break;
                case 'D':
                    v.push_back(500);
                    break;
                case 'M':
                    v.push_back(1000);
            }
        }
        if(v.size()==1){
            return v[0];
        }
        int sum=0;
        int n=v.size();
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=v[i+1]){
                sum+=v[i];
            }else{
                sum-=v[i];
            }
        }
        sum+=v[n-1];
        return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends