class Solution {
  public:
    void printTillN(int n) {
        // code here
     if(n==0)
     return;
     else
     printTillN(n-1);
     cout<<n<<" ";
    }
};