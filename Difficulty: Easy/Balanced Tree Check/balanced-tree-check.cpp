/* A binary tree node structure

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


class Solution{
    int checkBalancedHeight(Node* node){
        if(node==nullptr){
            return 0;
        }
    int leftHeight=checkBalancedHeight(node->left);
    if(leftHeight==-1){
        return -1;
    }
    int rightHeight=checkBalancedHeight(node->right);
    if(rightHeight==-1){
        return -1;
    }
    if(abs(leftHeight-rightHeight)>1){
        return -1;
    }
    return max(leftHeight,rightHeight)+1;
    }
public:
    bool isBalanced(Node *root){
     return checkBalancedHeight(root)!=-1;
    }
};