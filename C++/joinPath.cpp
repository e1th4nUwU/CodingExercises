#include<iostream>
#include<string>
using namespace std;

string joinPath(string,string);

int main(){
  cout<<endl<<joinPath("portion1", "portion2")<<endl<<joinPath("portion1/", "portion2")<<endl<<joinPath("portion1", "/portion2")<<endl<<joinPath("portion1/", "/portion2");
  return 0;
}

string joinPath(string a, string b){
  //I know it looks crumbled, I was just trying to solve it in one line owo
  return a.substr(0, a.length()-( a[a.length()-1] == '/' )) + "/" + b.substr( ( b[0] == '/' ), b.length() );
}
