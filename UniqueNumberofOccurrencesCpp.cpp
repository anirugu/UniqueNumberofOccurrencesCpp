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
	unordered_set<int> uniqueFrequency{};
	for (int i = 0; i < n; i++)
	{
		int current = arr[i];
		vals[current]++;
	}
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
