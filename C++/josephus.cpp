#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int josephus(int);

int main(){
	cout<<josephus(17);
	
	
	return 0;
}

int josephus(int n){
	vector<int> p;
	bool kill=false;
	int i;
	for(i=0; i<n; i++){
		p.push_back(i+1);
	}
	i=0;
	while(accumulate(p.begin(), p.end(), 0) != p[i]){
		if(p[i] != 0){
			if(kill){
				p[i]=0;
				kill=false;
			}
			else{
				kill=true;
			}
		}
		i+1 == p.size() ? i=0 : i++;
	}
	return accumulate(p.begin(), p.end(), 0);
}
