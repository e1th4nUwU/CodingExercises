#include<iostream>
#include<vector>
#include<string>
#include <bits/stdc++.h>
using namespace std;

vector<int> extractPrimes(int num);
bool checkPrime(int);

int main(){
	extractPrimes(10234);
	
	return 0;
}

vector<int> extractPrimes(int num){
	string str = to_string(num);
	int aux;
	vector<int> primes;
	for(int i=1; i<=str.size(); i++){
		for(int j=0; j<str.size(); j++){
			if(i+j <= str.size() && str.substr(j,i)[0] != '0'){
				aux = stoi(str.substr(j,i));
				if(checkPrime(aux)){
					primes.push_back(aux);
				}
			}	
		}
	}
	
	sort(primes.begin(), primes.end());

	return primes;
}

bool checkPrime(int n){
	if(n == 1 || n == 0){ return false; }
	for(int i=2; i<=n/2; i++){
		if(n%i == 0){ return false; }
	}
	return true;
}
