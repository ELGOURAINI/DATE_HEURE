#pragma once
namespace date
{
	class Heure
	{
	protected:
		int hrs;
		int min;
		int sec;
	public:
		Heure(int H=0, int M=0, int S=0);
		Heure(const Heure & H);
		Heure& operator=(const Heure& H);
		bool operator>(const Heure& H);
		void print() const;

	};
}
