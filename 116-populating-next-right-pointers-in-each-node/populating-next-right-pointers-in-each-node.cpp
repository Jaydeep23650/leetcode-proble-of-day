/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
         queue<Node*>q;
         if(!root)return root;
         q.push(root);
         while(!q.empty()){
            int sz=q.size();
            Node* temp=NULL;
            while(sz--){
                auto it=q.front();
                q.pop();
                 it->next=temp;
                temp=it;
                if(it->right)q.push(it->right);
                if(it->left)q.push(it->left);
               
            }
         }
         return root;
    }
};