//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends

void lowertoupper(string &str,int index){
    if (index==-1)
    return;
    
    str[index]='A'+str[index]-'a';
    lowertoupper(str,index-1);
}
 
string to_upper(string str){
   lowertoupper(str,str.size()-1);
   return str;
    
}