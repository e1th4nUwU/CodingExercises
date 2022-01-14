#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

string binary(string);
string replaceNums(string);

int main(){
	string str="lacasa";
	cout<<(replaceNums("10hell76o4 boi"));
	cout<<endl<<str.replace(str.begin()+2,str.begin()+4,"ol");
	return 0;
}

string replaceNums(string input){
	string str="";
	int j;
	for(int i=0; i<input.length(); i++){
		if(isdigit(input[i])){
			for(j=i; isdigit(input[j]); j++);
			str+=input.substr(0,i) + binary(input.substr(i,j-i));
			input = input.substr(j);
			i=0;
		}
	}
	str+=input;
	return str;
}

string binary(string str){
	int n =stoi(str),i;
	str="";
	for(i=1; i < n; i*=2);
	for(i; i >= 1; i/=2){
		if(n >= i){ n-=i; str+='1'; }
		else{ str+='0'; }
	}
	if(str[0] == '0'){ return str.substr(1, str.length()); }
	return str;
}
