#include<iostream>
using namespace std;
int main(){
	int i = 65;
	int *p = &i;
	char *pc = &i;
	float *pf = &i;
	
	cout << i << endl;
	cout << *p <<endl;
	cout << *pc << endl;
	cout << *pf << endl;
}
