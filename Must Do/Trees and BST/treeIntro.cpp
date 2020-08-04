#include<iostream>
#include<queue>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};

node* newNode(int x){
	node* temp = new node;
	temp->data = x;
	temp->left = temp->right = NULL;
}

void insert(node* root, int key){
	queue<node* > q;
	q.push(root);
	while(!q.empty()){
		node* temp = q.front();
		q.pop();
		
		if(!temp->left){
			temp->left = newNode(key);
			break;
		} else 
			q.push(temp->left);
			
		if(!temp->right){
			temp->right = newNode(key);
			break;
		} else	
			q.push(temp->right);
	}
}

void postorder(node* root){
	if(root == NULL)
		return;
	cout<<root->data<<" ";
	postorder(root->left);
	postorder(root->right);
}

void preorder(node *root){
	if(root == NULL)
		return ;
	preorder(root->left);
	preorder(root->right);
	cout<<root->data<<" ";
}

void inorder(node* root){
	if(!root)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main(){
	node* root = newNode(10); 
	root->left = newNode(11); 
	root->left->left = newNode(7); 
  	root->left->right = newNode(40);
  	root->right = newNode(9); 
	root->right->left = newNode(15); 
	
	inorder(root);
	cout<<endl;
	postorder(root);	cout<<endl;

	preorder(root);
}
