#include<iostream>
#include"clsInputValidate.h";
#include"clsDate.h";
using namespace std;

int main()
{	
	//cout << clsInputValidate::IsNumberBetween(4, 1, 8);
	cout << clsInputValidate::IsDateBetween(clsDate(), clsDate(8, 10, 2026), clsDate(3, 10, 2026));
}