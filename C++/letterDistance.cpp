#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

int letterDistance(string, string);

int main(){
	cout<<letterDistance("house", "fly");
	
	return 0;
}

int letterDistance(string s1, string s2){
	int d=0;
	if(s1.size() > s2.size()){ string aux=s1; s1=s2; s2=aux; }
	
	for(int i=0; i< s1.size(); i++){
		d+= abs( (int)s1[i] - (int)s2[i] );
	}
	
	d+= abs( (int)s1.size() - (int)s2.size() );
	
	return d;
}
