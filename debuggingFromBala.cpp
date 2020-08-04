#include<iostream>
#include<math.h>
using namespace std;

double findDet(double a, double b, double c){
	return sqrt(b*b - 4*a*c);
}

void solve(double a, double b, double c){
	double det = findDet(a, b, c);
	double ans1 = (-b + det)/(2*a);
	double ans2 = (-b - det)/(2*a);
	int a1 = ans1*1000; ans1 = (double)a1/1000;
	int a2 = ans2*1000; ans2 = (double)a2/1000;
	cout<<ans1<<" "<<ans2<<endl;
}

int main(){
	double a = 2, b = 4, c = 1;
	solve(a, b, c);
}
