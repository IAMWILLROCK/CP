#include<iostream>
#include<iomanip>
using namespace std;

const int m=50;
class ITEM{
	private:
		long int code[m];
		float cost[m];
		int count;
	public:
		void place();
		void tot_cost();
		void deleteItem();
		void display();
};
void ITEM::place(){
	count++;
	cout<<"\nEnter the Code of the Product:";
	cin>>code[count-1];
	cout<<"Enter the Price of the Product:";
	cin>>cost[count-1];
}
void ITEM::tot_cost(){
	float sum=0;
	for(int i=0;i<count;i++){
		sum+=cost[i];
	}
	cout<<"\nThe Total Cost:"<<sum;
}
void ITEM::deleteItem(){
	long int delv=0;
	cout<<"\nEnter the code:";
	cin>>delv;
	for(int i=0;i<count;i++){
		if(code[i]==delv){
			cost[i]=0;
		}
	}
}
void ITEM::display(){
	cout<<setw(10)<<"Item Code"<<setw(10)<<"Price"<<endl;
	for(int i=0;i<count;i++){
		cout<<setw(10)<<code[i]<<setw(10)<<cost[i]<<endl;
	}
}

main(){
	ITEM order;
	int x;
	do{
		cout<<"\n\nYou can do the following, Enter appropriate Choice:";
		cout<<"\n1: Add an Item.";
		cout<<"\n2. Display Total Value.";
		cout<<"\n3. Delete an Item.";
		cout<<"\n4. Dispaly all Items.";
		cout<<"\n5. Quit.\n";
		cin>>x;
		switch(x){
			case 1:	
				order.place();
				break;
			case 2:
				order.tot_cost();
				break;
			case 3:
				order.deleteItem();
				break;
			case 4:
				order.display();
				break;
			case 5:
				cout<<"Thanks for shopping.";
				exit(0);	
			default: cout<<"Look out Punk!! Try the fuck again!!";
		}
	}while(x!=5);
}
