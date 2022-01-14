#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cons(vector<int>);

int main(){
	cout<<endl<<cons({5,1,4,3,2,7,6})<<endl<<cons({5,6,7,8,9,9});
	
	return 0;
}

bool cons(vector<int> vec){
	sort( vec.begin(), vec.end());
	for(int i=0; i<vec.size()-1; i++){
		if(vec[i]+1 != vec[i+1]){ return false; }
	}
	return true;
}
