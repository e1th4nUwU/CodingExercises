#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

float floatSum(float,float);

int main(){
	setprecision(1);
	float n = 0.1+0.2;
	cout << floatSum(0.1, 0.2);
}

float floatSum(float A, float B) {
	int c=0;
	while(A<10 && B<10){
		A*=10;
		B*=10;
		c++;
	}
	A+=B;
	A/=pow(10,c);
  	return A;
}
