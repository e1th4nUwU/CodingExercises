#include<string>
#include<iostream>
using namespace std;

int sharedLetters(string, string);

int main(){
	
	cout<<endl<<sharedLetters("apple", "meaty");
	return 0;
}

int sharedLetters(string s1, string s2){
	string aux=""; int c=0;
	for(int i=0; i<s1.length(); i++){
		if(aux.find(s1[i]) == -1){
			aux+=s1[i];
		}
	}
	for(int i=0; i<aux.length(); i++){
		if(s2.find(aux[i]) != -1){
			c++;
		}
	}
	return c;
}
