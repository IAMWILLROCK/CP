#include<iostream>
#include<deque>
using namespace std;


struct node{
	int data;
	node* right;
	node* left;
};

node* newNode(int x){
	node* temp = new node;
	temp->data = x;
	temp->right = temp->left = NULL;
	return temp;
}

void ldy(node *root){
	if(root == NULL)
		return ;
	
	if(root->left){
		cout<<root->data<<" ";
		ldy(root->left);
	}
		
	else if(root->right){
		cout<<root->data<<" ";
		ldy(root->right);
	}	
}

void leafL(node *root){
	if(root){
		if(root->left){
			c
		}
	}
}

void boundaryTraversal(node* root){
	ldy(root);
	leafL(root);
//	rbdy(root);
}

int main(){
	node* root = newNode(10); 
	root->left = newNode(11); 
	root->left->left = newNode(7);
	root->left->right = newNode(40);
	root->right = newNode(9); 
	root->right->left = newNode(15); 
	
	boundaryTraversal(root);
}
