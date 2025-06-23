/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
public:
    bool isSymmetric(Node* root) {
        //your code goes here
        if(root==nullptr){
            return true;
        }
        return symmetry(root->left,root->right);

    }
private:
bool symmetry(Node* left,Node* right){
    if(left==nullptr && right==nullptr){
        return true;
    }
    if(left==nullptr || right==nullptr){
        return false;
    }
    if(left->data!=right->data){
        return false;
    }
    return symmetry(left->left,right->right)&& symmetry(left->right,right->left);
}

};