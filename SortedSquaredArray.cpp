// Sorted Squared Array
// Write a function that takes in a non-empty array of integers that are sorted in ascending order and returns a new array of the same length with the squares of the original integers also sorted in ascending order.

// Sample Input
// array = [1, 2, 3, 5, 6, 8, 9]
// Sample Output
// [1, 4, 9, 25, 36, 64, 81]

#include <vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  vector <int> squaredArray;
	
	for(auto value : array){
		squaredArray.push_back(value*value);
	}
	sort(squaredArray.begin(), squaredArray.end());
	return squaredArray;
}

