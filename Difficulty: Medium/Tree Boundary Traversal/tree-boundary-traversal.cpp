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
   bool isLeaf(Node* root){
    return !root->left && !root->right;
   }
   void addLeftBoundary(Node* root,vector<int>&result){
      Node* curr=root->left;
      while(curr){
        if(!isLeaf(curr)){
            result.push_back(curr->data);
        }
        if(curr->left){
            curr=curr->left;
        }
        else{
            curr=curr->right;
        }
      }
   }

void addRightBoundary(Node* root,vector<int>&result){
    Node* curr=root->right;
    vector<int>temp;
    while(curr){
        if(!isLeaf(curr)){
            temp.push_back(curr->data);
        }
        if(curr->right){
            curr=curr->right;
        }else{
            curr=curr->left;
        }
    }
    for(int i=temp.size()-1; i>=0; i--){
        result.push_back(temp[i]);
    }
}
void addLeaves(Node* root,vector<int>&result){
    if(isLeaf(root)){
        result.push_back(root->data);
        return;
    }
    if(root->left){
        addLeaves(root->left,result);
    }
    if(root->right){
        addLeaves(root->right,result);
    }
}
    vector<int> boundaryTraversal(Node* root) {
        // your code goes here
        vector<int> result;
        if (!root) {
            return result;
        }
        if (!isLeaf(root)) {
            result.push_back(root->data);
        }
        addLeftBoundary(root, result);
        addLeaves(root, result);
        addRightBoundary(root, result);

        return result;
    }
};