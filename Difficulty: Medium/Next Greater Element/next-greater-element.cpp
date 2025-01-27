//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the next greater element for each element of the array.
    vector<int> nextLargerElement(vector<int>& arr) {
        int n=arr.size();
        vector<int>answer;
        stack<int>s;
        for(int i=n-1; i>=0; i--){
            if(s.size()==0){
                answer.push_back(-1);
            }
            else if(s.size()>0 && s.top()>arr[i]){
                answer.push_back(s.top());
        }
            else if(s.size()>0 && s.top()<=arr[i]){
                while(s.size()>0 && s.top()<=arr[i]){
                    s.pop();
                }
            if(s.size()==0){
                answer.push_back(-1);
            }
            else{
                answer.push_back(s.top());
            }
            }
            s.push(arr[i]);
        }
        reverse(answer.begin(),answer.end());
        return answer;
       
    }
};

//{ Driver Code Starts.

int main() {
    int t; // Number of test cases
    cin >> t;
    cin.ignore(); // Ignore the newline after reading t
    while (t--) {
        vector<int> a;
        string input;

        // Reading the entire input line for the array
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num); // Read the array elements from input string

        Solution obj;
        vector<int> result = obj.nextLargerElement(a);

        // Print the result in the required format
        for (int i = 0; i < result.size(); i++) {
            if (i != 0)
                cout << " ";
            cout << result[i];
        }
        cout << endl;        // Ensure new line after each test case output
        cout << "~" << endl; // Ensure new line after each test case output
    }

    return 0;
}

// } Driver Code Ends