/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node* root) {
         vector<int>result;
            if(root==nullptr)
            return result;
            stack<Node*>nodeStack;
            nodeStack.push(root);
            while(!nodeStack.empty()){
                Node* node=nodeStack.top();
                nodeStack.pop();
                result.push_back(node->data);
                if(node->left)
                nodeStack.push(node->left);
                if(node->right)
                nodeStack.push(node->right);
            }
            reverse(result.begin(),result.end());
            return result;
		}
};