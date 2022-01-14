#include<iostream>
#include<string>
using namespace std;

int countUnique(string, string);

int main(){
  cout<<endl<<endl<<countUnique("apple", "play");
  return 0;
}

int countUnique(string str1, string str2) {
	string chars="";
  str1+=str2;
  for(int i=0; i<str1.size(); i++){
    if (chars.find(str1[i]) == string::npos) {
      chars+=str1[i];
    }
  }
  return chars.size();
}
