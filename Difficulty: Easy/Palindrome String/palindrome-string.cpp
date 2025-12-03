class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
    string reals=s;
    int start=0,end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    if(reals==s){
    return true;
    }
    return false;
}
};