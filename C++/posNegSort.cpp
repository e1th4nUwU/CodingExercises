#include<iostream>
#include<vector>
#include<ctype.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> posNegSort(vector<int>);

int main(){
	posNegSort({6, 3, -2, 5, -8, 2, -2});
	
	return 0;
}

vector<int> posNegSort(vector<int> arr){
	vector<int> pos;
	for(int i=0; i<arr.size(); i++){
		if(arr[i] > 0){ pos.push_back(arr[i]); }
	}
	sort(pos.begin(), pos.end());
	for(int i=0; i<arr.size(); i++){
		if(arr[i] > 0){ arr[i]=pos[0]; pos.erase(pos.begin()); }
	}
}
