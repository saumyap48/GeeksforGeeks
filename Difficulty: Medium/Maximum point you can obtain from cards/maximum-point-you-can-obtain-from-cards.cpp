//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxScore(vector<int>& cardScore, int k) {
   int rsum=0,lsum=0,maxsum=0;
    for(int i=0; i<k; i++){
        lsum+=cardScore[i];
        maxsum=lsum;
    }
    int rightIndex=cardScore.size()-1;
    for(int i=k-1; i>=0; i--){
        lsum-=cardScore[i];
        rsum+=cardScore[rightIndex];
        rightIndex--;
        maxsum=max(maxsum,lsum+rsum);
    }
    return maxsum;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Consume the newline character

    while (t--) {
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        vector<int> cardPoints;
        while (ss >> num)
            cardPoints.push_back(num);

        int k;
        cin >> k;
        cin.ignore(); // Consume the newline character

        Solution ob;
        cout << ob.maxScore(cardPoints, k) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends