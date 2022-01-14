#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

string missingAlphabets(string);

int main(){
	cout<<endl<<missingAlphabets("edabit");
	
	return 0;
}

string missingAlphabets(string str){
	vector<int> n; int i; string ret="";
	
	for(i=0; i<26; i++){ n.push_back(0); }
	for(i=0; i<str.length(); i++){
		n[(int)str[i]-97]++;
	}
	
	int max = *max_element(n.begin(),n.end());
	
	for(i=0; i<26; i++){
		if(n[i] < max){
			for(int j=0; j<max-n[i]; j++){
				ret+=(char)(i+97);
			}
		}
	}
	
	return ret;
}
