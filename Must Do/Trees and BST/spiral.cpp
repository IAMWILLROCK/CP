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

void printSpiral(node *root)
{
    //Your code here
    deque<node *> dq;
    dq.push_back(root);
    bool flag = false;
    while(!dq.empty()){
        if(flag){
            int size = dq.size();
            while(size>0){
                node* temp = dq.front();
                cout<<temp->data<<" ";
                dq.pop_front();
                size--;
                if(temp->left != NULL)
                	dq.push_back(temp->left);
                if(temp->right != NULL)
					dq.push_back(temp->right);
            }
            flag = !flag;
        } else {
            int size = dq.size();
            while(size>0){
                node* temp = dq.back();
                dq.pop_back();
                cout<<temp->data<<" ";
                size--;
                if(temp->right!= NULL)
               		dq.push_front(temp->right);
                if(temp->left!=NULL)
					dq.push_front(temp->left);
            }
            flag = !flag;
        }
    }
}

int main(){
	node* root = newNode(10); 
	root->left = newNode(11); 
	root->left->left = newNode(7);
	root->left->right = newNode(40);
	root->right = newNode(9); 
	root->right->left = newNode(15); 
	
	cout<<endl;
	printSpiral(root);
}
