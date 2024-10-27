//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        vector<int>count(256,0);
        int first=0,second=0,length=str.size();
        int diff=0;
        while(first<str.size())
        {
            if(count[str[first]]==0)
            diff++;
            count[str[first]]++;
            first++;
        };
        for(int i=0; i<256; i++)
            count[i]=0;
            
            first=0;
            while(second<str.size())
            {
            while(diff && second<str.size())
            {
             if(count[str[second]]==0)
             diff--;
             count[str[second]]++;
             second++;
              }
                length=min(length,second-first);
                while(diff!=1)
                {
                    length=min(length,second-first);
                    count[str[first]]--;
                    
                    if(count[str[first]]==0)
                    diff++;
                    first++;
                }
            }
          return length;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends