#include<iostream>
#include<math.h>
using namespace std;

double myPi(int);

int main(){
	for(int i=1; i<=15; i++){
		cout<<endl<<myPi(i);
	}
}

double myPi(int n){
	const double pi=.3141592653589793;
	return round(pi*pow(10,n+1))/pow(10,n);
}
