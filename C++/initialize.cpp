#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> initialize(vector<string>);

int main(){
	initialize({"Harry Potter" , "Ron Weasley"});
	
	return 0;
}

vector<string> initialize(vector<string> arr){
	vector<string> ret; int space; string aux;
	for(int i=0; i<arr.size(); i++){
		aux=arr[i][0]; aux+= ". ";
		for(space = 0; arr[i][space] != ' '; space++){}
		aux+=arr[i][space+1]; aux+='.';
		ret.push_back(aux);
	}
	return ret;
}
