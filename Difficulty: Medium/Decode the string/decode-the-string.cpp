//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string decodedString(string &s) {
         int n=s.size();        
        string result="";
        for(int i=0; i<n; i++){
         if(s[i]!=']'){
            result.push_back(s[i]);
         }
         else{
            string str="";

            while(!result.empty() && result.back()!='['){

                str.push_back(result.back());
                 result.pop_back();
            }
            reverse(str.begin(),str.end());
            result.pop_back();

            string nums="";
            while(!result.empty() && result.back()>='0' && result.back()<='9'){
                nums.push_back(result.back());
                result.pop_back();
            }
            reverse(nums.begin(),nums.end());
            
            int int_num =stoi(nums);

            while(int_num){
                result+=str;
                int_num--;
            }
         }
        }
        return result;
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
        cout << ob.decodedString(s) << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends