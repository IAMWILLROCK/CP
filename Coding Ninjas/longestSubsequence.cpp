#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> longestSubsequence(int *arr,int n){
	set<int> s;
	set<int>::iterator it;
	map<int,int> m;
	vector<int> ans;
	
	for(int i=0;i<n;i++){
		m.insert(pair<int,int>(arr[i],i));
	}
	
	for(int i=0;i<n;i++){
		s.insert(arr[i]);
	}
	
	int length=1,maxLength=0,start=arr[0],startc=arr[0];
	
	for(it=s.begin();it!=s.end();it++){
		while(s.find(++start)!=s.end()){
			length++;
		}
		if(length>maxLength){
			maxLength=length;
			startc= start-length;
		}else if(length==maxLength){
			if(m.find(start-1)->second < m.find(startc)->second){
				cout<<"start:"<<start<<" length:"<<length<<" startc:"<<startc<<endl;	
				startc=start-length;
			}
		}
		length=1;
		start=*(++it);
		it--;
	}

	for(it=s.find(startc);it!=s.end();it=s.find(++startc)){
		ans.push_back(*it);
	}
	
	return ans;
	
}

main(){
	int n=6;
	int arr[]={4,7,3,7,8,4};
	
	vector<int> ans;
	ans=longestSubsequence(arr,n);
	
	vector<int>::iterator it;
	for(it=ans.begin();it!=ans.end();it++){
		cout<<*it<<" ";
//		cout<<"Hey";
	}
}
