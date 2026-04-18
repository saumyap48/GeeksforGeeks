class Solution {
  public:
    void printNos(int n) {
        // code here
        if(n==0)
        return;
        else
        cout<<n<<" ";
        printNos(n-1);
    }
};