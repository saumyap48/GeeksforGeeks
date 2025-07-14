/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    // Should return decimal equivalent modulo 1000000007 of binary linked list
    long long unsigned int decimalValue(Node *head) {
        // Your Code Here
         vector<int>bits;
        while(head!=nullptr){
            bits.push_back(head->data);
            head=head->next;
        }
        const long long MOD=1e9+7;
        long long answer=0;
        for(int i=0; i<bits.size(); i++){
            answer=(answer*2+bits[i])%MOD;
        }
        return answer;
    }
};