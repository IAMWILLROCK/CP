#include<iostream>
using namespace std;

class time{
	private:
		int minutes;
		int hours;
	public:
		void getTime(int h,int m){
			hours = h;
			minutes = m;
		}
};
void addTime(time ,time);
int hours,minutess,hourss;
main(){
	time t1,t2;
	t1.getTime(1,45);
	t2.getTime(1,30);
	addTime(t1,t2);
	cout<<"\nHours:"<<hourss;
	cout<<"\nMinutes:"<<minutess;
}
void addTime(time t1,time t2){
	
	minutess = t1.minutes + t2.minutes;
	hours = minutes/60;
	minutess = minutes%60;
	hourss = hours + t1.hours + t2.hours;
}
