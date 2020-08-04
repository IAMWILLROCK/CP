#include<iostream>
#include<cmath>
using namespace std;

class user{
	int score=0;
	public:
		void increaseScore();
};

void user::increaseScore(){
	score++;
}

void toss(){
	cout<<"\n Guess Head or Tail:";
}

main(){
	char input;
	cout<<"\t\t\t\t\t\t\t!!!..Fighter Mohid..!!!"	;
	user Mohid,Fardin;
//	while(input!=7){
//		toss();
//		cout<<"\n\nMohid Enter the answer:"
//		
//	}
	cout<<endl<<rand()%40 ;	
}
