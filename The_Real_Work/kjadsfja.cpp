#include<iostream>
using namespace std;

class Employee{
	int x = 10;
	public:
		 void show(){
			cout<<x<<endl;
		}
};

class derivded: public Employee{
	int y = 20;
	public:
		void show(){
			cout<<y<<endl;
		}
};

int main(){
	Employee *b;
	derivded d;
	b = &d;
	b->show();
}
