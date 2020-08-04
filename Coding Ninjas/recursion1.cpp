#include<iostream>
using namespace std;

int fun1(int x,int y){
	if(x==0){
		cout<<"Inside x==0"<<endl;
		return y;
	} else {
		cout<<"X:"<<x<<" "<<"Y:"<<y<<endl;
		fun1(x-1,x+y);
	}
}

main(){
	int x = 5, y = 2;
	cout<<fun1(x,y);
}
