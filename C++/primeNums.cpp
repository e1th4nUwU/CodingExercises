#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

int primeNumbers(int num);
bool check(int);

int main(){
	cout<<primeNumbers(30);
	return 0;
}

int primeNumbers(int num) {
	int c=0;
	for(int i=2; i<=num; i++){
		if(check(i)){ c++;}
	}
	return c;
}

bool check(int n){
	for(int i=2; i<=n/2; i++){
		if(n%i == 0){ 
		return false;
		}
	}
	return true;
}
