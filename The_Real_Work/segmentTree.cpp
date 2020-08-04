#include<iostream>
using namespace std;


void buildTree(int* a, int* tree, int start, int end, int treeNode){
	if(start == end){
		tree[treeNode] = a[start];
		return ;
	}
	int mid = (end+start)/2;
	buildTree(a, tree, start, mid, 2*treeNode+1);
	buildTree(a, tree, mid+1, end, 2*treeNode+2);
	tree[treeNode] = tree[2*treeNode+1] + tree[2*treeNode + 2];
}

int helper(int *tree, int ni, int ne, int start, int end, int treeNode){
//	if(ni == start && ne == end)
//		return tree[treeNode];
	if(ni<=start && end>=ne) 
		return tree[treeNode];
	if(start<ni || end>ne)
		return 0;
	
	int mid = (start+end)/2;
//	cout<<mid<<" ";
	return helper(tree, ni, ne, start, mid, 2*treeNode+1)+helper(tree, ni, ne, mid+1, end, 2*treeNode+2);
}

int getSum(int *tree, int ni, int ne){
	return helper(tree, ni, ne, 0, 8, 1);
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int *tree = new int[18];
	buildTree(arr, tree, 0, 8, 0);
	for(int i=1; i<18; i++){
		cout<<tree[i]<<" ";
	}
	cout<<endl<<getSum(tree, 0, 7);
}
