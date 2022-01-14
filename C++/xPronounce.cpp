#include<iostream>
#include<string>
using namespace std;

string xPronounce(string);

int main(){
	cout<<endl<<xPronounce("OMG x box unboxing video x D");
	return 0;
}

string xPronounce(string sentence) {
	string str="";
	for(int i=0; i<sentence.length(); i++){
		if(sentence[i] == 'x'){
			if(sentence[i-1] == ' '){
			 if(sentence[i+1] ==' '){ str+="ecks"; }
			 else{ str+='z'; } 
			}
			else{ str+="cks"; }
		}
		else{ str+=sentence[i]; }
	}
	return str;
}
