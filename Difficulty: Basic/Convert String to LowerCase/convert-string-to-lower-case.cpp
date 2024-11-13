//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    void uppertolower(string &str, int index) {
        if (index == -1)
            return;
    if (str[index] >= 'A' && str[index] <= 'Z') {
        str[index] = 'a' + str[index] - 'A';
    }
        uppertolower(str, index - 1);
    }

    string toLower(string str) {
        uppertolower(str, str.size() - 1);
        return str;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.toLower(s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends