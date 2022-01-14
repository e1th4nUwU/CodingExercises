#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool isLegitimate(vector<vector<int>>);

int main(){
  cout<<endl<<endl<<isLegitimate({
	{0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 1, 1, 1, 0, 0, 1},
	{0, 1, 1, 1, 1, 1, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0}
  });
  return 0;
}

bool isLegitimate(vector<vector<int>> arr){
  vector<int> borders;
  //Top and bottom line
  borders.insert(borders.end(), arr[0].begin(), arr[0].end());
  borders.insert(borders.end(), arr[arr.size()-1].begin(), arr[arr.size()-1].end());
  //Sides
  for( int i=0; i<arr.size(); i++ ){
      borders.push_back(arr[i][0]);
      borders.push_back(arr[i][arr[i].size()-1]);
  }

  return !(find(borders.begin(), borders.end(), 1) != borders.end());
}
