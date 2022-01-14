#include<iostream>
#include<string>
#include<vector>
using namespace std;

string extendVowels(string,int);

int main(){
  cout<<extendVowels("Hello", 5);
  return 0;
}

string extendVowels(string str,int n){
  if(n < 0){ return "invalid"; }
  string aux="", vowels="aeiouAEIOU";
  for(int i=0; i<str.size(); i++){
    aux+=str[i];
    size_t found = vowels.find(str[i]);
    if(found != string::npos){
      for(int j=0; j<n; j++){
        aux+=str[i];
      }
    }
  }
  return aux;
}
