#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
<<<<<<< HEAD
	cout << " Hieu :";
	cin>> hieu(a,b);
=======
	cout << "Tong :";
	cin >> tong(a,b);
>>>>>>> 048cf9d9a7d5e8326590f931055ecde047420347
	system("pause");
	return 0;
}

<<<<<<< HEAD
int hieu(int a,int b)
{
	return a - b;
=======
int tong(int a, int b)
{
	return a + b;
>>>>>>> 048cf9d9a7d5e8326590f931055ecde047420347
}