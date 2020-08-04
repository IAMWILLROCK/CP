#include<iostream>
#include<string>
using namespace std;

class employee{
	private:
		string name;
		int age;
	public:
		void getData();
		void putData();
};
void employee::getData(){
	cout<<"\nEnter the Name of the Manager:";
	cin>>name;
	cout<<"\nEnter the Age of the Manager:";
	cin>>age;
}
void employee::putData(){
	cout<<"\nName:"<<name;
	cout<<"\nAge:"<<age;
}
main(){
	employee manager[10];
	int x,y=0;
	do{
		cout<<"Enter Appropriate Option:";
		cout<<"\nPress 1 to enter the manager details.";
		cout<<"\nPress 2 to display the manager details.";
		cout<<"\nPress 3 to exit.";
		cin>>x;
		if(x==1){
			manager[y].getData();
			y++;
		}
		else if(x==2){
			for(int i=0;i<y;i++){
				manager[i].putData();
			}
		}
	}while(x!=3);
}
