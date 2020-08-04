#include<iostream>
#include<algorithm>
using namespace std;

class Student{
	public:
	string name;
	int marks;
};

bool compare(Student s1, Student s2){
	return (s1.marks < s2.marks);
}

int main(){
	int n=5;
	Student arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i].name>>arr[i].marks;
	}
	sort(arr, arr+n, compare);
	for(int i=0; i<n; i++){
		cout<<arr[i].name<<" "<<arr[i].marks<<endl;
	}	
}
