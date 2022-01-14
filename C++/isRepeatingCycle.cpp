#include<iostream>
#include<vector>
using namespace std;

bool isRepeatingCycle(vector<int>, int);

int main(){
	cout<<endl<<isRepeatingCycle({1,2,3,1,2,3,1},3)<<endl<<isRepeatingCycle({1,2,3,4,2,3,1},4);
	
	return 0;
}

bool isRepeatingCycle(vector<int> arr, int length){
	for(int i=0;i<arr.size(); i++){
		if(arr[i] != arr[i%length]){
			return false;
		}
	}
	return true;
}
