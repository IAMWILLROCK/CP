#include<iostream>
using namespace std;

class integer{
	private:
		int value;
	public:
//		integer(void);
		void display(){
			cout<<"Value:"<<value;
		}
};
//integer :: integer(void){
//	value = 0;
//}

main(){
	integer a;
	a.display();
}
