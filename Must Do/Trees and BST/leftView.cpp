#include<iostream>
#include<stack>
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

void leftViewHelper(node* root, int level, int *maxLevel){
	if(root == NULL)
		return;
	if(level > *maxLevel){
		cout<<root->data<<" ";
		*maxLevel = level;
	}
	leftViewHelper(root->left, level+1, maxLevel);
	leftViewHelper(root->right, level+1, maxLevel);
}

void leftView(node* root){
	int maxLevel = 0;
	leftViewHelper(root, 1, &maxLevel);
}

int main(){
	node* root = newNode(10); 
	root->left = newNode(11); 
	root->left->left = newNode(7);
	root->left->right = newNode(40);
	root->right = newNode(9); 
	root->right->left = newNode(15); 
	
	cout<<endl;
	leftView(root);
}
