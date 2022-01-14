#include<iostream>
#include<cstdlib>
#include<string>
#include<ctype.h>
using namespace std;

string keywordCipher(string,string);

int main(){
	cout<<endl<<endl<<keywordCipher("purplepineapple","xyz");
}

string keywordCipher(string key,string msg){
	string aux="";
	for(int i=0; i<key.length(); i++){
		if(aux.find(key[i]) > aux.length()){
			aux+=key[i];
		}
	}
	key=aux;
	for(int i=97; i<123; i++){
		if(key.find((char)i) > key.length()){
			key+=(char)i;
		}
	}
	cout<<key;
	for(int i=0; i<msg.length(); i++){
		if(isalpha(msg[i])){ msg[i] = key[ (int)msg[i] - 97 ]; }
	}
	return msg;
}
