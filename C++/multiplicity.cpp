#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> multiplicity(vector<int>);

int main(){
	multiplicity({5,5,1,1,5,5,3});
	return 0;
}

vector<vector<int>> multiplicity(vector<int> og){
	vector<int> n, rep; //n = numbers found, rep = repetitions of each one
	
	//List and count every number & repetition
	for(int i=0; i<og.size(); i++){
		auto it = find(n.begin(),n.end(), og[i]); //Position of current number in vector 'n' 
		if(it == n.end()){ //Not found
			n.push_back(og[i]);
			rep.push_back(1); 
		}
		else{ //Found
			rep[ it - n.begin() ]++;
		}
	}
	
	//Sort everything into a bidimensional array
	vector<vector<int>> ret;
	for(int i=0; i<n.size(); i++){
		ret.push_back({ n[i],rep[i] });
	}
	
	//Cout the results for testing
	for(int i=0; i<ret.size(); i++){
		for(int j=0; j<ret[i].size(); j++){
			cout<<ret[i][j]<<' ';
		}
		cout<<endl;
	}
	
	return ret;
}
