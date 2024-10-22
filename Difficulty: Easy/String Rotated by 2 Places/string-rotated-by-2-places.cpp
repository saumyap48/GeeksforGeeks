//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
      void rotateclockwise(string &s){
        char c=s[s.size()-1];
        int index=s.size()-2;
        
        while(index>=0){
            s[index+1]=s[index];
            index--;
        }
        s[0]=c;
        
    }
      void rotateanticlockwise(string &s){
        char c=s[0];
        int index=1;
        
        while(index<s.size()){
            s[index-1]=s[index];
            index++;
        }
        s[s.size()-1]=c;
        
    }
    bool isRotated(string str1, string str2)
    {
        if(str1.size()!=str2.size()){
         return 0;
        }
         string Clockwise,Anticlockwise;
         
         Clockwise=str1;
         
         rotateclockwise(Clockwise);
         rotateclockwise(Clockwise);
         
         if(Clockwise==str2)
         return 1;
         
         Anticlockwise=str1;
        
         rotateanticlockwise(Anticlockwise);
         rotateanticlockwise(Anticlockwise);
         
         if(Anticlockwise==str2)
         return 1;
         
         return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends