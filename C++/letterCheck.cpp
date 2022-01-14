#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

bool letterCheck(vector<string> arr);

int main(){
	cout<<letterCheck( {"trances", "nectar"} )<<endl<<letterCheck({"assert", "staring"})<<endl<<letterCheck({"arches", "later"});
	return 0;
}

bool letterCheck(vector<string> arr) {
	transform(arr[0].begin(), arr[0].end(), arr[0].begin(), ::tolower);
	transform(arr[1].begin(), arr[1].end(), arr[1].begin(), ::tolower);
	for(int i=0; i<arr[1].size(); i++){
		//size_t = number of bytes used , MUST BE POSITIVE VALUES
		int found = arr[1].find(arr[0][i]);
		cout<<found<<' ';
		if(found == string::npos){ return 0; }
	}
	return 1;
}
