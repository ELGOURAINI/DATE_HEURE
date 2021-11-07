#include <iostream>
#include "DateH.h"
#include "heure.h"
using namespace date;
using namespace std;
int main()
{
    Heure H(04, 15, 00);
    Heure H1(9, 9, 9);
    H.print();
    H1.print();

    DateH D(04, 15, 00, 8, 06, 2001);
    D.print();

}
