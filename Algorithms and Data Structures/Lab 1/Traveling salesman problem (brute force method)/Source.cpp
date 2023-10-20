#include <time.h>
#include <iostream>

void Swap(int* a, int* b);
void CreateRandMatrD(int** matr, int m, int n, int ng, int vg);
void OutputMatrD(int** matr, int m, int n);
void BuildNewPerm(int* mas, int n);
void InsertingIntoOrderedArray(int* a, int n, int el);

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
	CreateRandMatrD(cost_matrix, numofc, numofc, 10, 99);
	OutputMatrD(cost_matrix, numofc, numofc);


	int* masofc; 
	masofc = new int[numofc];
	for (int k = 0; k < numofc; k++)
	{
		int k1 = k;
		masofc[k] = ++k1;
	}

	for (int k = 0; k < numofc; k++)
		std::cout << masofc[k] << " ";
	std::cout << std::endl;

	int fel, lel;
	fel = masofc[0];
	lel = masofc[numofc - 1];
	for (int h = 0; (fel != masofc[numofc - 1] && lel != masofc[0]); h++)
	{
		BuildNewPerm(masofc, numofc);
		for (int k = 0; k < numofc; k++)
			std::cout << masofc[k] << " ";
		std::cout << std::endl;
	}


	for (int i = 0; i < numofc; i++)
		delete[] cost_matrix[i]; 
	delete[] cost_matrix;
	delete[] masofc;
	return (0);
}


void BuildNewPerm(int* masofc, int numofc)
{
	int ik = 0;
	for (int i = 1; (i > 0) && (i < numofc); i++)
	{
		if (masofc[i] < masofc[i + 1])
			ik = i;
	}

	int jk = 0;
	for (int j = ik + 1; (j > ik) && (j <= numofc); j++)
	{
		if (masofc[j] > masofc[ik])
			jk = j;
	}

	Swap(&masofc[jk], &masofc[ik]);

	/*for (int i = ik + 1; i < numofc; i++)
		InsertingIntoOrderedArray(masofc, i, masofc[i]);*/

	for (int k = numofc - 1; k > ik + 1; k--)
	{
		for (int i = ik + 1; i < k; i++)
		{
			if (masofc[i] > masofc[i + 1])
				Swap(&masofc[i], &masofc[i + 1]);
		}
	}
}



void Swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void InsertingIntoOrderedArray(int* a, int n, int el)
{
	int i;
	for (i = n - 1; (el < a[i]) && (i >= 0); i--)
		a[i + 1] = a[i];
	a[i + 1] = el;
}

void CreateRandMatrD(int** matr, int m, int n, int ng, int vg)
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