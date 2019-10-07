#include<iostream>
#include<conio.h>
using namespace std;
void menue(int *p, int *o)
{
	int i = 0;
	int h = 0;
	cout << "choose the function you want to perform ";
	cout << " 1 : adding" << endl;
	cout << " 2 : subtracting" << endl;
	cout << " 3 : multiplication" << endl;
	cout << " 4 : dividing" << endl;
	cout << " 5 : MOD" << endl;
	cout << " 6 : exit" << endl;
	cin >> i;
	if (i == 1)
	{
		h = *p + *o;
		cout << "sum of two values is " << h;
	}
	else if (i == 2)
	{
		h = *p - *o;
		cout << "difference is " << h;
	}
	else if (i == 3)
	{
		h = *(p)* (*o);
		cout << "product is " << h;
	}
	else if (i == 4)
	{
		if (*o != 0)
		{
			h = *p / *o;
			cout << " division is " << h;
		}
		else
		{
			cout << "division is  infinity // invaid operation ";
		}
	}
	else if (i == 5)
	{
		if (*o != 0)
		{
			h = *p% *o;
			cout << "mod is " << h;

		}
		else
		{
			cout << "mod is invalid" << endl;
		}
		
	}
	else if (i == 6)
	{
		system("exit");
	}
menue(p,o);
}

int main()
{
	int a, b;
	int *r = &a;
	int *s = &b;
	cout << " enter the first value ";
	cin >> a;
	cout << " enter the second value ";
	cin >> b;
	menue(r, s);
	system("pause");
}