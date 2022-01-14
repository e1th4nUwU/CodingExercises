#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int);
int primorial(int);

int main(){
	cout<<endl<<endl<<primorial(6);
	return 0;
}

bool isPrime(int n){
	for(int i=2; i<n/2+1; i++){
		if(n%i == 0){ return false; }
	}
	return (n!=1);
}

int primorial(int n){
	int r=1;
	for(int i=2; n>0; i++){
		if(isPrime(i)){ 
			r*=i;
			n--;
		}
	}
	return r;
}
