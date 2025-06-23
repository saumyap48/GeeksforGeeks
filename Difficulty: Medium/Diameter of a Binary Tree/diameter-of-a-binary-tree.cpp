/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/
class Solution {
public:
    int diameter(Node* root) {
        //your code goes here
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
private:
  int height(Node* node,int&diameter){
    if(!node){
        return 0;
    }
    int lh=height(node->left,diameter);
    int rh=height(node->right,diameter);
    diameter=max(diameter,lh+rh);
    return 1 + max(lh,rh);
  }
};
