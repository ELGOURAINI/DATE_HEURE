#include "DateH.h"
#include <iostream>
using namespace date;
using namespace std;

date::DateH::DateH(int hrs, int min, int sec ,int jrs, int mois, int ans):Heure(hrs, min, sec)
{
	if (date_valide(jrs, mois, ans) == 1)
	{
		this->jrs = jrs;
		this->mois = mois;
		this->ans = ans;
	}
	this->jrs = jrs;
	this->mois = mois;
	this->ans = ans;
}
int date::DateH::annee_type(int ans)
{
	int m = (ans % 4 == 0) ? 1 : 0;
	return m;
}

int date::DateH::mois_valide(int mois)
{
	int m=(mois<=12 && mois>=1)? 1 : 0;
	return m;
}

int date::DateH::date_valide(int jrs , int mois , int ans)
{
	if (0 < jrs && jrs <= nbre_jrs(mois, ans))
		return 1;
	return 0;
}

int date::DateH::nbre_jrs(int mois, int ans)
{
	if (mois == 2)
	{
		if (annee_type(ans) == 1)
			return 29;
		return 28;
	}
	else
	{
		if (( mois%2 == 0 && mois > 7 ) || (mois % 2 != 0 && mois <= 7))
			return 31;
		return 30;
	}
}

void date::DateH::print() const
{
	cout <<endl << "la date est :"<<endl;
	Heure::print();
	cout << this->jrs << "/" << this->mois << "/" << this->ans << endl;

}

bool date::DateH::operator>(const DateH& D)
{
	bool  res ;
	res = Heure::operator>(D);
	res=(this->ans >= D.ans) ? true : false;
	res = (this->jrs >= D.jrs) ? true : false;
	res = (this->mois >= D.mois) ? true : false;
	return res;
}





