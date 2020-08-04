#include<iostream>
using namespace std;

class item{
	private:
		int number;
		float cost;
	public:
		void getdata(int a,float b);
		void putdata(void);
};
void item::getdata(int a,float b){
	number = a;
	cost = b;
	putdata();
}
void item::putdata(){
	cout<<"Number:"<<number<<endl;
	cout<<"Cost:"<<cost<<endl;
}
main(){
	item x,y;
	x.getdata(100,75.5);
	y.getdata(101,76.5);
	x.getdata(102,76.5);
}
