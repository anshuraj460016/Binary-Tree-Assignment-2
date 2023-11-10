#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int ans=0;
int diameter(Node*root){
     if(root==NULL) return 0 ;
     int LeftAns=diameter(root->left);
     int RightAns=diameter(root->right);
     ans=max(ans,LeftAns+RightAns+1);
     return max(RightAns,LeftAns) +1;
 }
  int diameterOfBinaryTree(Node* root) {
        diameter(root);
       return ans-1;
    }


int main(){
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
 

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
  

   cout<<diameterOfBinaryTree(a);
 
 
}
