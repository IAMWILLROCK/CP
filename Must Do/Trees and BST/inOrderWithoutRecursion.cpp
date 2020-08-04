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

void inOrder(node *root){
	node* current = root;
	stack<node *> s;
	
	while(current != NULL || !s.empty()){
		
		while(current != NULL){
			s.push(current);
			current = current->left;
		}
		
		current = s.top();
		s.pop();
		cout<<current->data<<" ";
		current = current->right;
	}
}

int main(){
	node* root = newNode(10); 
	root->left = newNode(11); 
	root->left->left = newNode(7);
	root->left->right = newNode(40);
	root->right = newNode(9); 
	root->right->left = newNode(15); 
	
//	inorder(root);
	cout<<endl;
	inOrder(root);
}
