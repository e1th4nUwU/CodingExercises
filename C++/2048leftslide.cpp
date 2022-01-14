#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

vector<int> leftSlide(vector<int>);
vector<int> removeLZeros(vector<int>);

int main(){
	leftSlide({2,,4,4});
	
	return 0;
}

vector<int> leftSlide(vector<int> arr){
	for(int i=1; i<arr.size(); i++){
		//Sum pairs
		if(arr[i-1] == arr[i]){
			arr[i-1]*=2;
			arr[i]=0;
			arr=removeLZeros(arr);
		}
	}
	arr=removeLZeros(arr);
}

vector<int> removeLZeros(vector<int> arr){
	int j;
	for(int i=1; i<arr.size(); i++){
		if(arr[i-1] == 0 && arr[i] != 0){
			for(j=i-1; j>0 && arr[j-1] == 0; j--){ }
			arr[j]=arr[i];
			arr[i]=0;
		}
	}
	return arr;
}
