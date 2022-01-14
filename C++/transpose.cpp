#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

vector<vector<int>> transposeMatrix(vector<vector<int>>); 

int main(){
	transposeMatrix({
		{1, 1, 1}, 
		{2, 2, 2}, 
		{3, 3, 3}
	});
	
	return 0;
}

vector<vector<int>> transposeMatrix(vector<vector<int>> arr) {
	vector<vector<int>> ret;
	vector<int> aux;
	for(int i=0; i<arr[0].size(); i++){
		aux.clear();
		for(int j=0; j<arr.size(); j++){
			aux.push_back(arr[j][i]);
		}
		ret.push_back(aux);
	}
	
	return ret;
}
