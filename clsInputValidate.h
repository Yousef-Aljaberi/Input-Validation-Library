#include"clsDate.h";
#pragma once
class clsInputValidate
{
public:
	static bool IsNumberBetween(int Number, int From, int To)
	{
		return (Number >= From && Number <= To);
	}
	static bool IsNumberBetween(double Number, double From, double To)
	{
		return (Number >= From && Number <= To);
	}
	static bool IsNumberBetween(float Number, float From, float To)
	{
		return (Number >= From && Number <= To);
	}

	//----------------------------------------------------------------------
	static bool IsDateBetween(clsDate Date, clsDate Date1, clsDate Date2)
	{
		//if (clsDate::CompareDate(Date1, Date2) == clsDate::After)
		/*{
			clsDate::SwapDates(Date1, Date2);
		}*/
		if ((clsDate::CompareDate(Date, Date1) == clsDate::After || clsDate::CompareDate(Date, Date1) == clsDate::Equal)
			&& (clsDate::CompareDate(Date, Date2) == clsDate::Befor || clsDate::CompareDate(Date, Date2) == clsDate::Equal))
		{
			return true;
		}
		return false;
	}
};

