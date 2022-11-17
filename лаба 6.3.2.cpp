// лаба 6.3.2.cpp 

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create1(int* b, const int size, const int Low, const int High, int i)
{
	b[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create1(b, size, Low, High, i + 1);
}


void Print1(int* b, const int size, int i)
{
	cout << setw(4) << b[i];
	if (i < size - 1)
		Print1(b, size, i + 1);
	else
		cout << endl;
}

int Sum1(int* b, const int size, int i, int S)
{
	if (b[i] < 0)
		S += b[i];
	if (i < size - 1)
		return Sum1(b, size, i + 1, S);
	else
		return S;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 24;
	int b[n];
	int Low = -15;
	int High = 75;
	Create1(b, n, Low, High, 0);
	Print1(b, n, 0);
	cout << "s = " << Sum1(b, n, 0, 0) << endl;
	return 0;
}