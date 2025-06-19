/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
 	      Node* node=root;
          stack<Node*>st;
          vector<int>inorder;
          while(true){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else{
                if(st.empty()){
                    break;
                }
                node=st.top();
                st.pop();
                inorder.push_back(node->data);
                node=node->right;
            }
          }
          return inorder;
		}
};