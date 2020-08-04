#include<iostream>
using namespace std;
main(){
	int x=5;
	int const *ptr=&x;
	cout<<*ptr+=1;
}
