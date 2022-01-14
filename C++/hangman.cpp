#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
#include<cctype>
#include<ctype.h>
using namespace std;

string hangman(string, vector<char>);

int main(){
	cout<<hangman("thE elePhaNt IN the rOom.", {'o', 'g', 'g', 'm', 'h','n','p'})<<endl<<endl;
	system("pause");
	return 0;
}

string hangman(string str, vector<char> arr){
	string ret="";
	for(int i=0; i<str.size(); i++){
		isalpha(str[i]) ? ret+='-' : ret+= str[i];
	}
	for(int j=0; j<arr.size(); j++){
		for(int i=0; i<str.size(); i++){
			if(tolower(str[i]) == arr[j]){ ret[i] = str[i]; }
		}	
	}
	return ret;
}
