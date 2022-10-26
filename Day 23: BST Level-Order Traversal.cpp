#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

	void levelOrder(Node * root){
        if ( root==NULL) return;
    
         queue<Node *> q; 
          Node* res = root;
   
    while(res!=NULL){
        cout <<res->data << ' ';
        
        if( res->left  != NULL ) q.push(res->left);
        if( res->right != NULL ) q.push(res->right);
        if( q.empty() ) {
              res = NULL;
        
        } else {
        res = q.front();
         q.pop();
        }
    }
	}

};



int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
