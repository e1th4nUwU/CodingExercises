#include<iostream>
#include<vector>
#include<string>
using namespace std;

string ticTacToe(vector<vector<char>>);

int main(){
	cout<<ticTacToe({
  {'X', 'O', 'O'},
  {'X', 'O', 'O'},
  {'#', 'X', 'X'}
});
	
}

string ticTacToe(vector<vector<char>> inputs) {
	//Check horizontal cases
	
	for(int i=0; i<3; i++){
		if(inputs[i][0] == inputs[i][1] && inputs[i][0] == inputs[i][2]){
			if(inputs[i][0] == 'X'){ return "Player 1 wins"; }
			else if(inputs[i][0] == 'O'){ return "Player 2 wins"; }
			else{ return "xd"; }
		}
	}
	
	//Check vertical cases
	for(int i=0; i<3; i++){
		if(inputs[0][i] == inputs[1][i] && inputs[0][i] == inputs[2][i]){
			if(inputs[0][i] == 'X'){ return "Player 1 wins"; }
			else if(inputs[0][i] == 'O'){ return "Player 2 wins"; }
			else{ return "xd"; }
		}
	}
	
	//Check diagonals
	if((inputs[0][0] == inputs[1][1] && inputs[0][0] == inputs[2][2]) || (inputs[0][2] == inputs[1][1] && inputs[0][2] == inputs[2][0])){
		if(inputs[1][1] == 'X'){ return "Player 1 wins"; }
		else if(inputs[1][1] == 'O'){ return "Player 2 wins"; }
		else{ return "xd"; }
	}
	
	//GG
	return "It's a Tie";
}
