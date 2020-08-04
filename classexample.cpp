#include<iostream>
using namespace std;
class person{
	char name[30];
	int age;
	public:
	void getdata();
	void display();
};
void person::display(){
		cout<<"Name:"<<name<<"\n";
		cout<<"Age:"<<age<<"\n";
}
void person::getdata(){
		cout<<"Hello! Enter your name:"<<"\n";
		cin>>name;
		cout<<"Enter the age please:";
		cin>>age;	
}
int main(){
	char decision;
	person fardin;
	fardin.getdata();
	fardin.display();
	cout<<"\nWant to print another data:";
	cin>>decision;
	while(decision=='y'){
		person anotherGuy;
		anotherGuy.getdata();
		anotherGuy.display();
		cout<<"\nWant to print another data:";
		cin>>decision;
	}
	cout<<"Should have typed yes!! :(";
}
