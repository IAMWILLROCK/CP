#include<iostream>
#include<string>
using namespace std;

class binary{
	string s;
	public:
		void getbinary();
		void binary_check();
		void ones_complement();
		void show(){
			cout<<"The 1's Complement is:"<<s<<endl;
		};
};
void binary::getbinary(){
	cout<<"Enter the binary shit:";
	cin>>s;
}
void binary::binary_check(){
	for(int i=0;i<s.length();i++){
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout<<"You fucked up, Dawg!!";
			exit(0);
		}
	}
}
void binary::ones_complement(){
	getbinary();
	binary_check();
	for(int i=0;i<s.length();i++){
		if(s.at(i)=='0')
			s.at(i)='1';
		else
			s.at(i)='0';
	}
	show();
}
main(){
	binary b;
	b.ones_complement();
}
