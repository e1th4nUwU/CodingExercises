#include<iostream>
#include<string>
using namespace std;

string fiboWord(int);

int main(){
	cout<<endl<<endl<<fiboWord(3);
	
	return 0;
}

string fiboWord(int n){
	if(n < 2){  return "invalid"; }
	string s1="b", s2="a", s3,r="b, a";
	for(int i=2; i<n; i++){
		s3=s2+s1;
		r+=", "+s3;
		s1=s2;
		s2=s3;
	}
	return r;
}
