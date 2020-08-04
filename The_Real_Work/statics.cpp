#include<iostream>
using namespace std;

class shop{
	private:
		long int code;
		static int count;
	public:
		void getCode();
		static void displayCount();
};
int shop::count;
void shop::getCode(){
	cout<<"Enter the Code of the Item:"<<endl;
	cin>>code;
	count++;
	displayCount();
}
void shop::displayCount(){
	cout<<"\nThe total count of the cart is:"<<count<<endl;
}
main(){
	shop a;
	int x;
	long int code;
	do{
		cout<<"\nChoose from the following:";
		cout<<"\n1. To Enter the Code.";
		cout<<"\n2. Quit";
		cout<<"\nEnter the appropriate number:";
		cin>>x;
		if(x==1)
		a.getCode();
		
	}while(x!=2);
}
