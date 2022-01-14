#include<iostream>
#include<cstdlib>
#include<string>
#include<vector>
using namespace std;

vector<string> leftRotations(string);
vector<string> rightRotations(string);

int main(){
	string a = "abc";
	vector<string> aux = leftRotations(a);
	for(int i=0; i<aux.size(); i++){
		cout<<aux[i]<<endl;
	}
	
	cout<<endl;
	
	aux = rightRotations(a);
	for(int i=0; i<aux.size(); i++){
		cout<<aux[i]<<endl;
	}
	
	cout<<endl<<endl;
	
	system("pause");
}

vector<string> leftRotations(string str){
	vector<string> arr;
	for(int i=0; i<str.length(); i++){
		arr.push_back(str.substr(i, str.length()-i)+str.substr(0,i));
	}
	return arr;
}

vector<string> rightRotations(string str){
	vector<string> arr;
	for(int i=0; i<str.length(); i++){
		arr.push_back(str.substr(str.length()-i,i)+str.substr(0,str.length()-i));
	}
	return arr;
}
