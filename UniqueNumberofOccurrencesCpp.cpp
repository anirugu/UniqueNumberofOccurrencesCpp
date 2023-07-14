// UniqueNumberofOccurrencesCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool isFrequencyUnique(int n, int arr[])
{
	unordered_map<int, int> values{ };
	for (int i = 0; i < sizeof(arr); i++) {
		const int num = arr[i];
		if (values.contains(arr[i]))
			values[num] = values[num] + 1;
		else
			values[num] = 1;
	}
	
	
}

int main()
{
	int arr[] = { 1,2,3,4,5,5 };
	isFrequencyUnique(5, arr);

	std::cout << "Hello World!\n";
}

