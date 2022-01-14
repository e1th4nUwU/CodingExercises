#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> grantTheHint(string);

int main(){
	grantTheHint("The Life Of Pi");
	
	return 0;
}

vector<string> grantTheHint(string str){
	vector<string> words, hints; int longest;
	for(int i=0; i<str.length(); i++){
		if(str[i] == ' '){
			words.push_back(str.substr(0,i));
			str = str.substr(i+1, str.length());
			i=0;
		}
	}
	words.push_back(str);
	for(int i=0; i<words.size(); i++){
		if(words[i].size() > longest){ longest = words[i].size(); }
	}
	
	for(int j=0; j<longest+1; j++){
		str="";
		for(int i=0; i<words.size(); i++){
			for(int w=0; w<words[i].size();w++ ){
				if(w >= j){ str+='_'; }
				else{ str+=words[i][w]; }
			}
			if(i+1 != words.size()){ str+=' '; }
		}
		hints.push_back(str);
		str="";
	}
	
	for(int i=0; i<hints.size(); i++){
		cout<<hints[i]<<endl;
	}
	return hints;
}
