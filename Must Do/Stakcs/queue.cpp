#include<iostream>
#include<queue>

using namespace std;

void showq(queue<int> qu){
	while(!qu.empty()){
		cout<<qu.front()<<" ";
		qu.pop();
	}
}

int main(){
	queue<int> q;
	
	q.push(10);
	q.push(20);
	q.push(30);
	
	showq(q);
	
	q.pop();
	
	showq(q);
}
