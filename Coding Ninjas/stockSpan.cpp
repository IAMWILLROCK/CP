#include<iostream>
#include<stack>
using namespace std;

int* stockSpan(int price[], int size){
//	int *span = new int[size];
//	span[0]=1;
//	for(int i=1;i<size;i++){
//		span[i] = 1;
//		for(int j=i-1;j>=0;j--){
//			if(price[i]>price[j]){
//				span[i]++;
//			} else {
//				break;
//			}
//		}
//	}
//	return span;

	stack<int> st;
	int *span = new int[size];
	span[0]=1;
	st.push(0);
	for(int i=1;i<size;i++){
		while(!st.empty()&&price[st.top()]<price[i])
			st.pop();
		span[i] = (st.empty())?i+1:(i-st.top());
		st.push(i);
}
	return span;
}
main(){	
	int size = 8;
	int price[] = {60 ,70, 80, 100, 90, 75, 80, 120};
	int *arr = stockSpan(price,size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
