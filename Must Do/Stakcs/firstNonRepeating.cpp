#include<iostream>
#include<queue>
using namespace std;

void firstNonRepeating(char arr[], int n){
	queue<char> q;
	char frq[26];
	for(int i=0; i<26; i++){
		frq[i] = 0;
	}
	int ans = -1;
	for(int i=0; i<n; i++){
		q.push(arr[i]);
		frq[arr[i] - 'a']++;
		while(frq[q.front() - 'a'] != 1 && !q.empty()){
			q.pop();
		}
		if(q.empty()){
			cout<<-1<<" ";
			continue;
		} else {
			cout<<q.front()<<" ";
		}
	}
	
}

int main(){
	int n;
	cin>>n;
	char a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	firstNonRepeating(a, n);
}
