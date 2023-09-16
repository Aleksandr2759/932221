
#include <time.h>
#include <iostream>

void Swap(int* a, int* b);
void RandMatrD(int** matr, int m, int n, int ng, int vg);
void OutputMatrD(int** matr, int m, int n);

int main()
{
	int** cost_matrix;
	int numofc;
	std::cout << "Enter the number of cities: ";
	std::cin >> numofc;
	std::cout << " " << std::endl;

	cost_matrix = new int* [numofc];
	for (int i = 0; i < numofc; i++)
		cost_matrix[i] = new int[numofc];
	RandMatrD(cost_matrix, numofc, numofc, 10, 99);
	OutputMatrD(cost_matrix, numofc, numofc);

	return (0);
}



void Swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void RandMatrD(int** matr, int m, int n, int ng, int vg)
{
	srand(time(0));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			matr[i][j] = rand() % (vg - ng + 1) + ng;
}

void OutputMatrD(int** matr, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			std::cout << "  " << matr[i][j];
		std::cout << " " << std::endl;
	}
}