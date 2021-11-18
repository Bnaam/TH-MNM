#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b)
{
	return a * b;

}

void chanle(int a)
{
	if(a%2 == 0)
		cout << " Chan ";
	else
		cout << " Le ";
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;

	cout << " Hieu :";
	cin>> hieu(a,b);

	cout << "Tong :";
	cin >> tong(a,b);

	cout << "A la :";
	cin >> chanle(a);

	system("pause");
	return 0;
}


int hieu(int a,int b)
{
	return a - b;

int tong(int a, int b)
{
	return a + b;

}