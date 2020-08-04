#include<iostream>
enum shape{
	circle,rectangle,triangle;
};
main(){
	cout<<"Enter the damn piece of code:\n";
	cin>>code;
	while(code=>circle&&code<=triangle){
		switch(code){
			case circle:
				cout<<"\nYou are in circle now";
			case rectangle:
				cout<<"\nYou are in rectangle now";
			case triangle:
				cout<<"\nYou are in triangle now";
		}
		cout<<"Enter the damn piece of code:\n";
		cin>>code;
	}
}
