#include<iostream>
#include<algorithm>
#include<vector>
#include <unordered_map>
#include<string>
using namespace std;

//struct Interval{
//	int st,et;
//};
//bool compare(Interval i1,Interval i2){
//	return (i1.st<i2.st);
//}

	//nonRepeatingCharacter(string str)
char nonRepeatingCharacter(string str){
//	vector<pair<char,int>> v;
//	for(int i=0;i<str.length();i++){
//		int count=1;
//		for(int j=0;j<str.length();j++){
//			if(str.at(i)==str.at(j)){
//				v.push_back(make_pair(str.at(i),count));
//				count++;	
//			}
//		}
//	}
	int count[str.length()];
	for(int i=0;i<str.length();i++){
		count[i]=0;
		for(int j=0;j<str.length();j++){
			if(str.at(i)==str.at(j)){
				count[i]++;
			}
		}
		if(count[i]==1){
			return str.at(i);
		}
	}
	for(int i=0;i<str.length();i++){
		if(count[i]==0){
			return str.at(0);
		}
	}
} 



main(){
	
	//First Non-Repeating Character
	string str="gdhIgHada";
	cout<<nonRepeatingCharacter(str);
	
//	Interval arr[] = { {6,8},{1,9},{2,4},{4,7} };
//	sort(arr,arr+4,compare);
//	for(int i=0;i<4;i++){
//		cout<<arr[i].st<<" "<<arr[i].et<<endl;
//	}


    // Swaping Arrays
//	int arr[] = {1,5,3,7,8,2,6};
//	int arr1[] = {0,0,0,0,0,0,0};
//	sort(arr,arr+7);
//	for(int i=0;i<7;i++){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
//	swap(arr,arr1);
//	for(int i=0;i<7;i++){
//		cout<<arr1[i]<<" ";
//	}
//	cout<<endl;
//	for(int i=0;i<7;i++){
//		cout<<arr[i]<<" ";
//	}
	
	
	//Swapping Vectors
//	vector<int> v1,v2;
//	for(int i=0;i<10;i++){
//		v1.push_back(i+1);
//	} 
//	for(int i=0;i<10;i++){
//		v2.push_back(i+10);
//	} 
//	swap(v1,v2);
//	vector<int>::iterator it;
//	for(it=v2.begin();it!=v2.end();it++){
//		cout<<*it<<" ";
//	}
	
	
	//Swapping an array of vectors
//	vector<int> v[2];
//	int count=0;
//	for(int i=0;i<2;i++){
//		if(count==0){
//			for(int j=0;j<5;j++){
//				v[i].push_back(j+1);
//			}
//			continue;
//		}
//		for(int j=0;j<5;j++){
//				v[i].push_back(j+10);
//			}
//	} 
//	swap(v[0],v[1]);
//	vector<int>::iterator it;
//	for(it=v[1].begin();it!=v[1].end();it++){
//		cout<<*it<<" ";
//	}


	

}
