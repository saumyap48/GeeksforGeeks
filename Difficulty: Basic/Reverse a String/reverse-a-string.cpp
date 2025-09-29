// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n=s.size();
        int start=0,end=n-1;
        while(start<end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};
