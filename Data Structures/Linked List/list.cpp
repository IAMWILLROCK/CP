#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
};

class linked_list{
	
	public:
		node *head, *tail;
		
		linked_list(){
			head = NULL;
			tail = NULL;
		}
		
		void new_node(int n){
			node *temp = new node();
			temp->data = n;
			temp->next = NULL;
			if(head == NULL){
				head = temp;
				tail = temp;
			} else {
				tail->next = temp;
				tail = tail->next;
			}
		}
		
		void display(){
			node *p = head;
			while(p!=NULL){
				cout<<p->data<<" ";
				p=p->next;
			}
		}
		
		int count(node *head){
			node* p = head;
			int c=0;
			while(p!=NULL){
				c++;
				p=p->next;
			}
			return c;
		}
		
		void insert(int n, int loc){
			if(loc == 1){
				node* temp = new node();
				temp->data = n;
				temp->next = head;
				head = temp;
			} else if(loc<=count(head)) {
				int c = 0;
				node* p = new node();
				p =head;
				while(p!=NULL){
					c++;
//					cout<<c<<endl;
					if(c==loc-1){
//						cout<<c<<endl;
						node* temp = new node();
						temp->data = n;
						temp->next = p->next;
						p->next = temp;
					}
//					cout<<p->data<<endl;
					p=p->next;
				}
			}
		}
		
		void middle(){
			node* p = new node();
			int c = count(head);
			if(c%2 == 1){
				int mid = c/2 + 1;
				int run = 1;
				while(p!=NULL){
					run++;
					p=p->next;
					if(run == mid){
						cout<<"Yes"<<endl;
						cout<<p->data;
					}
				}
				return;
			}
		}
		
		
		void reverse(node* head1){
			if(head == NULL || head->next == NULL)
				return ;
			node *p = head1;
			node *q;
			node *r;
			reverse(p->next->next);
			r = p->next;
			q = p->next->next;
			p->next->next = p;
			p->next = q;
			p = r;
		}
};

int main(){
	linked_list a;
	a.new_node(1);
	a.new_node(2);
	a.new_node(3);
	a.new_node(4);
	a.new_node(5);
	a.display();
//	a.middle();
	a.reverse(a);
	cout<<endl;
	a.display();
}
