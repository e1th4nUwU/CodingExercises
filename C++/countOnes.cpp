#include<iostream>
#include<vector>
using namespace std;

int countOnes(vector<int>);

int main(){
	cout<<endl<<countOnes({1, 1, 1, 1, 0, 0, 0, 0});
	return 0;
}

int countOnes(vector<int> arr){
	bool flag = false;int c=0;
	
	for(int i=1; i<arr.size(); i++){
		if(!flag && arr[i] && arr[i-1]){
			c++;
			flag=!flag;
		}
		else if(flag && !arr[i]){
			flag=!flag;
		}
	}
	return c;
}
