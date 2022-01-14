#include<iostream>
#include<cstdlib>
#include<string>
#include<ctype.h>
using namespace std;

string caesarCipher(string, int);

int main(){
	cout<<caesarCipher("abcd",3);

	return 0;
}

string caesarCipher(string s, int k){
	k%=26;
	int aux;


	for(int i=0; i<s.size(); i++){
		if(isalpha(s[i])){
			aux=(int)s[i];
			aux+=k;

			if(islower(s[i])){
				if(aux < 97){ aux+=26; }
				if(aux > 122){ aux-=26; }
			}
			else{
				if(aux < 65){ aux+=26; }
				if(aux > 90){ aux-=26; }
			}
			s[i]=(char)aux;
		}
	}

	return s;
}
