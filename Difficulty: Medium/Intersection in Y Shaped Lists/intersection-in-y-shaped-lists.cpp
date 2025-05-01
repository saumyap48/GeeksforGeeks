//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

vector<int> take() {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number) {
        arr.push_back(number);
    }
    return arr;
}

Node* inputList(int size, vector<int> v) {
    if (size == 0)
        return NULL;

    int val = v[0];

    Node* head = new Node(val);
    Node* tail = head;

    for (int i = 0; i < size - 1; i++) {
        val = v[i + 1];
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}


// } Driver Code Ends

// Linked list Node
/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* headA, Node* headB) {
         unordered_set<Node*>node_set;
         while(headA!=NULL){
            node_set.insert(headA);
            headA=headA->next;
         }
         while(headB!=NULL){
            if(node_set.find(headB)!=node_set.end()){
                return headB;
            }
            headB=headB->next;
         }
         return NULL;
    }
};



//{ Driver Code Starts.

/* Driver program to test above function*/
int main() {
    int T, n1, n2, n3;

    cin >> T;
    cin.ignore();
    while (T--) {

        vector<int> v1 = take();
        vector<int> v2 = take();
        vector<int> v3 = take();
        int n1 = v1.size(), n2 = v2.size(), n3 = v3.size();

        Node* head1 = NULL;
        Node* head2 = NULL;
        Node* common = NULL;

        head1 = inputList(n1, v1);
        head2 = inputList(n2, v2);
        common = inputList(n3, v3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL)
            temp->next = common;

        Solution ob;
        Node* intersectNode = ob.intersectPoint(head1, head2);
        cout << intersectNode->data << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends