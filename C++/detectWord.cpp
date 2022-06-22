/* A word is on the loose and now has tried to hide amongst a crowd of tall letters! Help write a function to detect what the word is, knowing the following rules:

-The wanted word is in lowercase.
-The crowd of letters is all in uppercase.
-Note that the word will be spread out amongst the random letters, but their letters remain in the same order.
*/
#include<iostream>
#include<cctype>

std::string detectWord(std::string str) {
	std::string s="";
	for(int i=0; i<str.length(); i++)
		if(islower(str[i])) s+= str[i];
	return s;
}

int main(){
	using namespace std;
	cout<<"Hello world!"<<endl<<detectWord("hola");
	return 0;
}
