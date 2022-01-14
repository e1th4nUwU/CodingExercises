#include<iostream>
#include<string>
#include<vector>
using namespace std;

int notOdd(int);
int isOdd(int);
vector<int> countDigits(vector<int>, string);

int main(){
	cout<<endl<<isOdd(777);
	return 0;
}

int notOdd(int n){
	string s = to_string(n); int c=0;
	for(int i=0; i<s.length(); i++){
		if((int)s[i] % 2 == 0){ c++; }
	}
	return c;
}

int isOdd(int n){
	string s = to_string(n); int c=0;
	for(int i=0; i<s.length(); i++){
		if((int)s[i] % 2 != 0){ c++; }
	}
	return c;
}

vector<int> countDigits(vector<int> arr, string type){
	bool odd;
	type == "odd" ? odd=true : odd = false;
	if(odd){
		for(int i=0; i<arr.size(); i++){
			arr[i] = isOdd(arr[i]);
		}
	}
	else{
		for(int i=0; i<arr.size(); i++){
			arr[i] = notOdd(arr[i]);
		}
	}
	return arr;
}
