//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minChar(string& s) {
        // Step 1: Reverse the string
        string reversed = s;
        reverse(reversed.begin(), reversed.end());
        
        // Step 2: Create the combined string
        string combined = s + '#' + reversed;
        
        // Step 3: Calculate LPS array
        int n = combined.length();
        vector<int> lps(n, 0); // LPS array initialized with 0s
        
        // Building the LPS array using the combined string
        for (int i = 1; i < n; i++) {
            int j = lps[i - 1];  // j stores the length of the previous matched prefix-suffix
            while (j > 0 && combined[i] != combined[j]) {
                j = lps[j - 1]; // We keep moving the pointer to the next possible match
            }
            if (combined[i] == combined[j]) {
                j++; // If characters match, increment the length of matched prefix-suffix
            }
            lps[i] = j;  // Store the current length of matched prefix-suffix in LPS array
        }
        
        // Step 4: Calculate minimum characters to add
        // We need to add (s.length() - LPS[last index]) characters
        return s.length() - lps.back();  // lps.back() gives us the length of the matched prefix-suffix
    }
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends