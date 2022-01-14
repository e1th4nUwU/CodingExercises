#include<iostream>
#include<vector>
#include<algorithm>
#include<vector>
using namespace std;

string alphabetIndex(string);

int main(){
	cout<<alphabetIndex("Abc");
	return 0;
}

string alphabetIndex(string str) {
	for_each(str.begin(), str.end(), [](char & c){ c = ::toupper(c); });
	
	vector<int> let;
	
	for(int i=0; i<str.size(); i++){
		cout<<(int)str[i]<<endl;
		if((int)str[i] > 64 && (int)str[i] < 91){
			let.push_back((int)str[i]-64);
		}
	}
	
	str="";
	
	for(int i=0; i<let.size()-1; i++){
		str+=to_string(let[i])+" ";
	}
	str += to_string(let[let.size()-1]);
	return str;
}
