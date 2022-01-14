#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


bool consecutiveCombo(vector<int> a1, vector<int> a2) {
    vector<int> v = a1;
    v.insert(v.end(), a2.begin(), a2.end()); //Combine arrays
    int min=*min_element(v.begin(), v.end()),i,j; //Get minimal element and declare variables
    for(i=0; i<v.size(); i++){
        for(j=0; j<v.size(); j++)if(v[j] == min) j = v.size(); //Look for the succesive number inside the array
        j == v.size()+1 ? min++ : i=v.size()+1; //In case the number is not found, break the cycle
    }
    return i == v.size();
}

int main(){
    consecutiveCombo({1, 4, 5, 7}, {2,3, 6});
    consecutiveCombo({1, 4, 5, 7}, {3, 6});
    return 0;
}
