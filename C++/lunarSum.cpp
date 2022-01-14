#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

int lunarSum(int, int);

int main(){
	
	cout<<lunarSum(134, 41);
	return 0;	
}

int lunarSum(int n1, int n2){
	string s1, s2;
	if(n1 > n2){ s1 = to_string(n1); s2 = to_string(n2); }
	else{ s2 = to_string(n1); s1 = to_string(n2); }
	while(s1.length() != s2.length()){
		s2 = '0'+s2;
	}
	n1=0;
	for(int i=0; i<s1.length(); i++){
		(s1[i] - '0') > (s2[i] - '0') ? n1+=(s1[i] - '0')*pow(10,s1.length()-i-1) : n1+=(s2[i] - '0')*pow(10,s1.length()-i-1);
	}
	
	return n1;
}
