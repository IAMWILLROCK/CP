#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

int tour(petrolPump p[], int n){
	int tank=0, i=0, k=1;
	deque<int> q;

	
	while(k<n){
		q.push_back(i);
		if(i>=n){
			i=0;
		}
		if(tank+p[i].petrol < p[i].distance){
			k--;
			tank+=p[q.front()].distance;
		} else {
			tank+= p[i].petrol - p[i].distance;
			k++;
		}
		i++;
	}
	return q.front();
}

int main(){
	
	petrolPump pumps[8] = {{96,25}, {46,83},{68,15},{65,35},{51,44},{9,88},{79,77},{85,89}};
	
	cout<<tour(pumps, 8);
}
