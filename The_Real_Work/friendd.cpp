#include<iostream>
using namespace std;

class class_2;

class class_1{
	private:
		int value1;
	public:
		void setValue(int a){
			value1 = a;
		};
		int display(){
			return value1;
		};
		friend void class_exchange(class_1 &,class_2 &);
};

class class_2{
	private:
		int value2;
	public:
		void setValue(int a){
			value2 = a;
		};
		int display(){
			return value2;
		};
		friend void class_exchange(class_1 &,class_2 &);
};

void class_exchange(class_1 &a, class_2 &b){
	int t;
	t = a.value1;
	a.value1 = b.value2;
	b.value2 = t;
}

main(){
	class_1 x;
	x.setValue(10);
	class_2 y;
	y.setValue(20);
	
	cout<<"After:"<<x.display()<<"\n"<<y.display();
	class_exchange(x,y);;
	cout<<"After:"<<x.display()<<"\n"<<y.display();
}
