#include<iostream>
#include<string>

using namespace std;

int checker(float &x){
	if(x>=50||x<=0){
		cout<<"Enter the correct value";
		cin>>x;
		checker(x);
	}
	return 1;
}

float display(float *m){
	cout<<"The marks are"<<endl;
	for(int i=0;i<=5;i++){
		cout<<m[i]<<"\t";
	}
}

main(){
	float marks[6], avg = 0, tot = 0;;
	
	for(int i=0;i<=5;i++){
		cout<<"Enter the marks:";
		cin>>marks[i];
		checker(marks[i]);
		tot = tot + marks[i];
	}
	
	display(marks);
	cout<<"The Average is:"<<tot/6<<endl;
}

