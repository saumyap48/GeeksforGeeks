//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
      sort(candies,candies+N);
      int min_amount=0,max_amount=0;
     int i=0,j=N-1;
     while(i<=j){
         min_amount+=candies[i];
         i++;
         j-=K;
     }
     i=N-1,j=0;
     while(i>=j){
         max_amount+=candies[i];
         i--;
         j+=K;
     }
     vector<int>answer;
     answer.push_back(min_amount);
     answer.push_back(max_amount);
     return answer;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends