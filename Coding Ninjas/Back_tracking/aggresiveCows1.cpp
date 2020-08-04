#include<iostream>
using namespace std;

bool check(long long N, int dist, int n_cows, long long positions[]){
	int x = 0;
	n_cows--;
	for(int i=1; i<N; i++){
		if(positions[i] - positions[x] >= dist){
			n_cows--;
			x=i;
		}
		if(n_cows == 0){
			return true;
		}
	}
	return false;
}

int max_distance = 0;

int main(){
	long long N = 5, cows = 3, distance;
	bool find;
	long long positions[N] = {1, 2, 5, 10, 11};
	distance = (positions[N-1] - positions[0]);
	for(int i=1; i<=distance; i++){
		find = check(N, i, cows, positions);
		if(find == true)
			max_distance++;
	}
	cout<<max_distance<<endl;
}
