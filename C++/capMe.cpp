#include<iostream>
#include<string>
#include<vector>
#include<ctype.h>
#include<bits/stdc++.h>
using namespace std;

vector<string> capMe(vector<string>);

int main(){
	capMe({"mavis", "senaida", "letty"});
}

std::vector<std::string> capMe(std::vector<std::string> arr){
	for(int i=0; i<arr.size(); i++){
		transform(arr[i].begin()+1, arr[i].end(), arr[i].begin()+1, ::tolower);
		arr[i][0] = toupper(arr[i][0]);
	}
	return arr;
}
