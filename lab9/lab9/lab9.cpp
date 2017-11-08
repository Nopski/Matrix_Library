// lab9.cpp: определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"

#include <iostream>
#include "lab9.h"
#include <stdexcept>

using namespace std;

matrix::matrix(int row, int col)
{
	m = row;
	n = col;
	p = new int*[m];
	for (int i = 0; i < m; ++i)
	{
		p[i] = new int[n];
		for (int j = 0; j < n; ++j)
			p[i][j] = 0;
	}
}
void matrix::accept()
{
	cout << "Enter matrix elements: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> p[i][j];
		}
	}
}
void matrix::display()
{
	cout << "The matrix is:\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << p[i][j] << " ";
		}
		cout << endl;
	}
}
void matrix::test()
{
	int K;
	cout << "Enter k: " << endl;
	cin >> K;
	display();
	int R = p[K - 1][K - 1];
	cout << endl;
	for (int d = 0; d < m; d++)
	{
		p[K - 1][d] = p[K - 1][d] / K;
	}
	display();
}


