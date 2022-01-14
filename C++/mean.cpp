#include<iostream>
#include<vector>
#include<cmath>
using namespace std; 

float mean(std::vector<int> arr);

int main(){
	cout<<endl<<endl<<mean({1, 0, 4, 5, 2, 4, 1, 2, 3, 3, 3});
}

float mean(std::vector<int> arr) {
	float n=0;
	for(int i=0; i<arr.size(); i++){ n+=arr[i]; }
	n= round(( n/arr.size())*100)/100;
	return n;
}
