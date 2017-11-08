#pragma once
#ifdef MATRIXDLL_EXPORTS
#define MATRIXDLL_API __declspec(dllexport)
#else
#define MATRIXDLL_API __declspec(dllimport)
#endif

#include "stdafx.h"
#include <iostream>
using namespace std;

class MATRIXDLL_API matrix
{
	int **p, m, n;
public:
	matrix(int row, int col);

	//    ~matrix()
	//    {
	//       delete [] p;
	//    }

	void accept();

	void display();

	void test();

};