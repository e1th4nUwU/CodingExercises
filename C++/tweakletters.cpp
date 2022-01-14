#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;

string tweakLetters(string, vector<int>);

int main(){
	cout<<tweakLetters("abc", {-1, -1, -1});
	
	return 0;
}

string tweakLetters(string str, vector<int> arr){
	vector<int> chars;
	for(int i=0; i<str.size(); i++){
		chars.push_back((int)str[i]+arr[i]);
		if(chars[i] < 97){ chars[i]+= 26; }
		else if(chars[i] > 122){ chars[i]-=26; }
	}
	str="";
	for(int i=0; i<chars.size(); i++){
		str+=char(chars[i]);
	}
	
	return str;
}
