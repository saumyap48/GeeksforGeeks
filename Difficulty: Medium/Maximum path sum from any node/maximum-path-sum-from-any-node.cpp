// User Fuction template for C++
/*
// Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {	
public:
    int findMaxPathSum(Node* root,int &maxi){
        if(root==nullptr){
            return 0;
        }
        int leftMaxPath=max(0,findMaxPathSum(root->left,maxi));

        int rightMaxPath=max(0,findMaxPathSum(root->right,maxi));

        maxi=max(maxi,leftMaxPath+rightMaxPath+root->data);

        return max(leftMaxPath,rightMaxPath)+root->data;
    }
    int findMaxSum(Node* root) {
        //your code goes here
        int maxi=INT_MIN;
        findMaxPathSum(root,maxi);
        return maxi;
    }
};