#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

const int n = 5;

void main() 
{
	setlocale(LC_ALL, "");
	int z,max,min;
	int v;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cout << "������� ����o = "; cin >> z;
		arr[i] = z;
	}
	
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
		
	cout << endl;

	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << " ";
		z = z + arr[i];
	}
	cout << endl << "����� = " << z;
	// ������� � ��������
	
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) { max = arr[i]; }
		if (arr[i] < min) { min = arr[i]; }
	}
	cout << endl << "�������� = " << max;
	cout << endl << "������� = " << min;
	cout << endl << "������� = " << z/n;
	
}