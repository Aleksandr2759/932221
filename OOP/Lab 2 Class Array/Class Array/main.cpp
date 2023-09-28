#include <iostream>

#include "Array.h"

double calculateAvg(Array arr)
{
	if (arr.size() == 0)
	{
		return 0;
	}

	double avg = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		avg += arr[i];
	}

	avg /= arr.size();
	return avg;
}


int main()
{
	Array arr(10, 0);
	std::cout << arr[3] << ' ' << arr[9] << std::endl;
	arr[3] = 4;
	arr[5] = arr[3];

	//std::cout <<

	arr.print();

	getchar();
	return (0);
}