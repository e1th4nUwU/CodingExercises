#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

float median(vector<int>);

int main(){
	cout<<endl<<median({1, 0, 1, 0, 0, 0, 1, 1});
}

float median(std::vector<int> arr) {
	sort(arr.begin(), arr.end());
	
	for(int i=0; i<arr.size(); i++){ cout<<arr[i]<<' '; 
	}
	return arr.size()%2 != 0 ? arr[arr.size()/2] : ((float)arr[arr.size()/2]+(float)arr[arr.size()/2-1])/2 ;
}
