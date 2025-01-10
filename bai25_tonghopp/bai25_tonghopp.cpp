// bai25_tonghopp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
bool isSNT(int so) {
	int dem = 0;
	for (int i = 1; i <= so; i++)
	{
		if (so % i == 0) {
			dem++;
		}
	}
	if (dem == 2)
	{
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	double so, tongso = 0;
	cout << "tong so chan: "; cin >> so;
	for (int i = 0; i < so; i++)
	{
		if (i % 2 == 0) {
			cout << i << " ";
			tongso = tongso + i;

		}
	}
	cout << "\ntong so le: ";
	for (int i = 0; i < so; i++)
	{
		if (i % 2 != 0) {
			cout << i << " ";
			tongso = tongso + i;
		}
	}

	{
		double giaithua = 1;

		cout << "\nnhap giai thua: ";
		for (double i = 1; i <= so; i++)
		{
			giaithua = giaithua * i;
		}
		cout << "giai thua: " << giaithua;
		int fibonacci{};

	}
	int so1 = 0, so2 = 1, tong = so1 + so2;

	cout << " \nnhap so luong so tren day so Fibonacci: ";
	cout << so1 << " " << so2 << " ";
	for (int i = 0; i < so - 2; i++)
	{
		cout << tong << " ";
		so1 = so2;
		so2 = tong;
		tong = so1 + so2;
	}


	for (int i = 1; i <= so; i++)
	{
		if (isSNT(i)) {
			cout << i << " ";
		}
	}
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
