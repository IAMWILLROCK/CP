#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};

int main(){
	Node *head;
	Node *temp = new Node();
	temp->data = 5;
	temp->link = NULL;
	head = temp;
	Node *temp1 = new Node();
	temp1->data = 10;
	temp1->link = NULL;
	temp->link = temp1;
	cout<<head->data<<head->link->data<<endl;
	Node *i=head;
	while(i->link!=NULL){
		cout<<i->data<<" ";
		i = i->link;
	}	
}
