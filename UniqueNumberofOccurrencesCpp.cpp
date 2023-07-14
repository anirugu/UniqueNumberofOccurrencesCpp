// Unique Number of Occurrences.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <algorithm>
using namespace std;

bool isFrequencyUnique(int n, int arr[])
{
	unordered_map<int, int> vals{};

	for (int i = 0; i < n; i++)
	{
		int current = arr[i];
		vals[current]++;
	}
	unordered_set<int> uniqueFrequency{};
	for (const auto &pair : vals)
	{
		if (uniqueFrequency.count(pair.second) > 0)
		{
			return false;
		}
		else
		{
			uniqueFrequency.insert(pair.second);
		}
	}
	return true;
}

int main()
{
	int arr[] = {0, -4, -4, 0, -4, -4, -4, 0, 0};
	isFrequencyUnique(9, arr);
	std::cout << "Hello World!\n";
}
