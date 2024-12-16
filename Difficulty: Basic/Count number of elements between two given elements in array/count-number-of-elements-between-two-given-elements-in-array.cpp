//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int getCount(vector<int>& arr, int num1, int num2) {
        int n = arr.size();
        int count = 0;
        int index = -1, index1 = -1;

        // Find the first occurrence of num1 from the front
        for (int i = 0; i < n; i++) {
            if (arr[i] == num1) {
                index = i;
                break;
            }
        }

        // Find the first occurrence of num2 from the back
        for (int i = n-1; i >= 0; i--) {
            if (arr[i] == num2) {
                index1 = i;
                break;
            }
        }

        // If either num1 or num2 is not found, return -1
        if (index == -1 || index1 == -1) {
            cout << "One or both elements not found!" << endl;
            return -1;  // Return -1 if any element is not found
        }

        // Ensure index1 is after index (so that we count between them)
        if (index > index1) {
            return 0;  // If num1 comes after num2, return 0
        }

        // Count the elements between num1 and num2
        for (int i = index + 1; i < index1; i++) {
            count++;
        }

        return count;
    }
};



























//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        int num1, num2;
        cin >> num1 >> num2;
        cin.ignore();
        Solution ob;
        cout << ob.getCount(arr, num1, num2) << "\n";
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends