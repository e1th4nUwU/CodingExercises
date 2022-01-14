#include <iostream>
#include<string>
#include<vector>
#include<sstream>

std::vector<int> toArray(int);
int toNumber(std::vector<int>);

int main()
{
    std::cout<<std::endl<<std::endl<<toNumber({2,3,5});
    return 0;
}

std::vector<int> toArray(int num) {
	std::string str=std::to_string(num); std::vector<int> n;
	for(int i=0; i<str.size(); i++){
		n.push_back(str[i] - '0');
	}
	return n;
}

int toNumber(std::vector<int> arr) {
	std::string str="";
	for(int i=0; i<arr.size(); i++){
		str+=std::to_string(arr[i]);
	}
	std::stringstream ss(str);
	int n=0;
	ss >> n;
	return n;
}
