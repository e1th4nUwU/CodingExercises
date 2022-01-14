#include<string>
#include<iostream>
#include<vector>
#include<ctype.h>
using namespace std;

string removeLastVowel(string);

int main(){
	
	cout<<endl<<removeLastVowel("Get busy living or get busy dying.");
	
	return 0;
}

string removeLastVowel(string str){
	vector<string> words;
	for(int i=0; i<str.length(); i++){
		if(str[i] == ' '){
			words.push_back(str.substr(0,i));
			str = str.substr(i+1, str.length());
			i=0;
		}
	}
	
	words.push_back(str);
	str="";
	
	for(int i=0; i<words.size(); i++){
		
		for(int j=words[i].length()-1; j > -1; j--){
			if(tolower(words[i][j]) == 'a' || tolower(words[i][j]) == 'e' || tolower(words[i][j]) == 'i' || tolower(words[i][j]) == 'o' || tolower(words[i][j]) == 'u'){
				cout<<words[i]<<endl;
				words[i].erase(words[i].begin()+j);
				break;
			}
		}
		str+=words[i]+' ';
	}
	str.pop_back();
	return str;
}
