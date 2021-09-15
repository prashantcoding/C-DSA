//structure of a tree
#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *right;
		Node *left;
		Node(int val){
			this->data=val;
			right=NULL;
			left=NULL;
		}
	
};
void inorder(Node *root){
	if(root==NULL) return ;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	

}
void preorder(Node *root){
	if(root==NULL) return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(Node *root){
	if(root==NULL) return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}
void tree_inversion(Node *root){
	
}
int main(){
	Node *root=new Node(5);
	Node *second=new Node(10);
	Node *third=new Node(15);
	root->left=second;
	root->right=third;
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
}
