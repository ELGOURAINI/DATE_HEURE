#pragma once
#include "heure.h"
namespace date
{
	class DateH :public Heure
	{
	private:
		int jrs;
		int mois;
		int ans;

	public:
		DateH(int hrs, int min, int sec, int jrs=0, int mois=0, int ans=0);
		int annee_type(int ans);
		int mois_valide(int mois);
		int date_valide(int jrs, int mois, int ans);
		int nbre_jrs(int, int);
		void print() const;
		bool operator>(const DateH& D);
	};
};


