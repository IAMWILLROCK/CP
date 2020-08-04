#include<iostream>
using namespace std;
void f(int & x){
	x=x+10;
	cout<<x<<endl;
}
main(){
	int m=10;
	f(m);
	cout<<x;
}
