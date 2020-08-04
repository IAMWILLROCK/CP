#include<iostream>
#include<map>
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

void bottomViewHelper(node* root, int hd, map<int,int> &m){
	if(root == NULL)
		return;
	bottomViewHelper(root->left, hd-1, m);
	{
		m[hd] = root->data;
	}
	bottomViewHelper(root->right, hd+1, m);
}
void inorder(node* root){
	if(!root)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void bottomView(node* root){
	map<int, int> m;
	map<int,int>::iterator it;
	bottomViewHelper(root, 0, m);
	for(it=m.begin(); it!=m.end(); it++){
		cout<<it->second<<" ";
	}
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
	bottomView(root);
}
