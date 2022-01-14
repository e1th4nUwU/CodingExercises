#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int lcmOfArray(vector<int>);

int main(){
	cout<<lcmOfArray({44, 64, 12, 17, 65});
	return 0;
}

int lcmOfArray(vector<int> nums){
	int max=nums[0], i;
	for(i=1; i<nums.size(); i++){
		if(nums[i] > max){ max=nums[i]; }
	}
	vector<int> n;
	for(int i=0; i<nums.size(); i++){
		if(nums[i] != max){ n.push_back(nums[i]); }
	}
	int m;
	for(m=1; m<2147483646; m++){
		for(i=0; i<n.size(); i++){
			if(max*m % n[i] != 0){
				break;
			}
		}
		if(i == n.size()){ return max*m; }
	}
}
