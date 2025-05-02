//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends

/* Link list Node:

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

// Deletes middle of linked list and returns head of the modified list
class Solution {
  public:
    Node* deleteMid(Node* head) {
        if(head==nullptr ||head->next==nullptr){
        delete head;
        return nullptr;
     }
     Node* temp=head;
     int n=0;
     while(temp!=NULL){
        n++;
        temp=temp->next;
     }
     int middleIndex=n/2;
     temp=head;
     while(temp!=NULL){
        middleIndex--;
        if(middleIndex==0){
            Node* middle=temp->next;
            temp->next=temp->next->next;
            delete middle;
            break;
        }
       temp=temp->next;
     }
     return head;
    }
};
 


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution obj;
        head = obj.deleteMid(head);
        printList(head);
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends