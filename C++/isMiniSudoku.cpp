#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>
using namespace std;

bool isMiniSudoku(vector<vector<int>>);

int main(){
	cout<<isMiniSudoku({
		{1, 3, 2}, 
		{9, 7, 8}, 
		{4, 5, 6}
	});
	
	return 0;
}

bool isMiniSudoku(vector<vector<int>> square){
	string str="";
	for(int i=0; i<3; i++){
		for(int i=0; i<3; i++){
			str+= to_string(square[i]);
		}
	}
	cout<<str<<endl<<endl;
	return true;
}

