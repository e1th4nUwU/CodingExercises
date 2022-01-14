#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> scrambled(vector<string>,string);

int main(){
	scrambled({"cee","dee","eer","erd","ere","red","ree","cede","cere","cree","deer","dere","dree","rede","reed","ceder","cedre","cered","creed","decree","recede"}, "c*d**");
	
	return 0;
}

vector<string> scrambled(vector<string> words, string mask) {
	for(int i=0; i<words.size(); i++){
		if(words[i].length() != mask.length()){
			words.erase(words.begin()+i);
			i--;
		}
	}
	
	for(int i=0; i<words.size(); i++){
		for(int j=0; j<mask.length(); j++){
			if(mask[j] != '*' && words[i][j] != mask[j]){
				words.erase(words.begin()+i);
				i--;
				break;
			}
		}
	}
	return words;
}
