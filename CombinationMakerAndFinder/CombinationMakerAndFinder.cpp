// CombinationMakerAndFinder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Find 3 digit combination between range of numbers which give targeted sum.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int targetSum = 10;
	vector<vector<int>> combinations;

	for (int i = 0; i <= targetSum; i++) {
		for (int j = 0; j <= targetSum - i; j++) {
			int k = targetSum - i - j;
			if (k >= 0 && k <= 10) {
				vector<int> combination = { i, j, k };
				combinations.push_back(combination);
			}
		}
	}

	cout << "Combinations of 3 values whose sum is 10:" << endl;
	for (const vector<int>& combination : combinations) {
		cout << combination[0] << " + " << combination[1] << " + " << combination[2] << " = 10" << endl;
	}

	cout << "Total number of combinations: " << combinations.size() << endl;

	return 0;
}

