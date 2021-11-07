#include "heure.h"
#include <iostream>
using namespace date;
using namespace std;
date::Heure::Heure(int H, int M, int S)
{
	this->hrs = (0 <= H && H < 24) ? H : 0;
	this->min = (0 <= M && M < 60) ? M : 0;
	this->sec = (0 <= S && S < 60) ? S : 0;
}

date::Heure::Heure(const Heure& H)
{
	this->hrs = H.hrs;
	this->min = H.min;
	this->sec = H.sec;
}

Heure& date::Heure::operator=(const Heure& H)
{
	if (this != &H)
	{
		this->hrs = H.hrs;
		this->min = H.min;
		this->sec = H.sec;
	}
	return *this;
}

bool date::Heure::operator>(const Heure& H)
{
	bool res;
	res = (this->hrs >= H.hrs) ? true : false;
	res = (this->min >= H.min) ? true : false;
	res = (this->sec >= H.sec) ? true : false;
	return res;
}

void date::Heure::print() const
{
	cout << this->hrs << "::" << this->min << "::" << this->sec << endl;
}
