#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool canPlay(vector<string>, string);

int main(){
	vector<string> arr;
	
	cout<<canPlay({"yellow 3", "yellow 5", "red 8"}, "green 2");
	
	return 0;
}

bool canPlay(vector<string> hand, string face) {
	int i=0; string color="";
	while(face[i] != ' '){
		color+=face[i];
		i++;
	}
	face = face.substr(i+1);
	for(i=0; i<hand.size(); i++){
		if(hand[i].find(color) != -1 ^ hand[i].find(face) != -1){ return true; }
	}
	return false;
}
