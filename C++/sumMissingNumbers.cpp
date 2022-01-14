#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int sumMissingNumbers(vector<int>);

int main(){
	cout<<endl<<sumMissingNumbers({1,3,5,7,9});
	
	return 0;
}

int sumMissingNumbers(vector<int> arr){
	int r=0, min=arr[0], max=min;
	
	//Get min and max numbers
	for(int i=0; i<arr.size(); i++){
		if(arr[i] < min){ min = arr[i]; }
		else if(arr[i] > max){ max = arr[i]; }
	}
	
	vector<int>::iterator it;
	//Looking for & summing values
	for(int i=min; i<max; i++){
		it = find (arr.begin(), arr.end(), i);
		if(it == arr.end()){
			r+=i;
		}
	}
	return r;
}
