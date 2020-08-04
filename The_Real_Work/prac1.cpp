#include<iostream>
#include<string>
using namespace std;

inline float area(int side){
	return side*side;
}
inline float area(int l,int b){
	return l*b;
}
inline float area(float);
main(){
	cout<<"Square Area Call:"<<area(5)<<endl;
	cout<<"Rectangle Area Call:"<<area(2,3)<<endl;
	cout<<"Circle Area Call:"<<area(5.5);
}
inline float area(float r){
	return 3.14*r*r;
}
